'use strict';

var Shuffle = window.Shuffle;

var Demo = function (element) {
    this.element = element;
    
    this.shuffle = new Shuffle(element, {
        itemSelector: '.picture-item'
    });
    
    // Log events.
    this.addShuffleEventListeners();
    
    this._activeFilters = [];
    
    this.addFilterButtons();
    
    this.mode = 'exclusive';
};

Demo.prototype.toggleMode = function () {
    if (this.mode === 'additive') {
        this.mode = 'exclusive';
    } else {
        this.mode = 'additive';
    }
};

/**
 * Shuffle uses the CustomEvent constructor to dispatch events. You can listen
 * for them like you normally would (with jQuery for example).
 */
Demo.prototype.addShuffleEventListeners = function () {
    this.shuffle.on(Shuffle.EventType.LAYOUT, function (data) {
        console.log('layout. data:', data);
    });
    
    this.shuffle.on(Shuffle.EventType.REMOVED, function (data) {
        console.log('removed. data:', data);
    });
};

Demo.prototype.addFilterButtons = function () {
    var options = document.querySelector('.filter-options');
    
    if (!options) {
        return;
    }
    
    var filterButtons = Array.from(options.children);
    
    filterButtons.forEach(function (button) {
        button.addEventListener('click', this._handleFilterClick.bind(this), false);
    }, this);
};

Demo.prototype._handleFilterClick = function (evt) {
    var btn = evt.currentTarget;
    var isActive = btn.classList.contains('active');
    var btnGroup = btn.getAttribute('data-group');
    
    // You don't need _both_ of these modes. This is only for the demo.
    
    // For this custom 'additive' mode in the demo, clicking on filter buttons
    // doesn't remove any other filters.
    if (this.mode === 'additive') {
        // If this button is already active, remove it from the list of filters.
        if (isActive) {
            this._activeFilters.splice(this._activeFilters.indexOf(btnGroup));
        } else {
            this._activeFilters.push(btnGroup);
        }
        
        btn.classList.toggle('active');
        
        // Filter elements
        this.shuffle.filter(this._activeFilters);
        
        // 'exclusive' mode lets only one filter button be active at a time.
    } else {
        this._removeActiveClassFromChildren(btn.parentNode);
        
        var filterGroup;
        if (btn.getAttribute("data-group") == 'alllevel') {
            filterGroup = Shuffle.ALL_ITEMS;
        }
        else {
        if (isActive) {
            // btn.classList.remove('active');
            // filterGroup = Shuffle.ALL_ITEMS;
            return;
        } else {
            btn.classList.add('active');
            filterGroup = btnGroup;
        }
        }
        
        this.shuffle.filter(filterGroup);
    }
};

Demo.prototype._removeActiveClassFromChildren = function (parent) {
    var children = parent.children;
    for (var i = children.length - 1; i >= 0; i--) {
        children[i].classList.remove('active');
    }
};

// Advanced filtering
Demo.prototype.addSearchFilter = function () {
    var searchInput = document.querySelector('.js-shuffle-search');
    
    if (!searchInput) {
        return;
    }
    
    searchInput.addEventListener('keyup', this._handleSearchKeyup.bind(this));
};

document.addEventListener('DOMContentLoaded', function () {
    window.demo = new Demo(document.querySelector(".view-success-stories-landing > .view-content"));
});
