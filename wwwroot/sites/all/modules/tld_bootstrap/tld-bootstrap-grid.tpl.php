<?php

/**
 * @file
 * Overrride the default grid to make it play nicely with bootstap
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<?php if ($views_bootstrap['container_enabled']): ?>
  <<?php print $views_bootstrap['container_element'] ?> class="span<?php print $views_bootstrap['container_width'] ?>">
<?php endif ?>

<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $row_number => $columns): ?>
  <div class="row">
    <?php foreach ($columns as $column_number => $item): ?>
    <?php if ($views_bootstrap['item_enabled']): ?>
      <<?php print $views_bootstrap['item_element'] ?> class="span<?php print $views_bootstrap['item_width'] ?>">
    <?php endif ?>
    <?php print $item; ?>
    <?php if ($views_bootstrap['item_enabled']): ?>
      </<?php print $views_bootstrap['item_element'] ?>>
    <?php endif ?>
    <?php endforeach; ?>
  </div>
<?php endforeach; ?>

<?php if ($views_bootstrap['container_enabled']): ?>
  </<?php print $views_bootstrap['container_element'] ?>>
<?php endif ?>