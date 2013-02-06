## Views Cache Bully

This module makes some serious assumptions about caching your views. It forces caching down your throat.

This is pretty straightforward module. It works by setting the views_plugin_cache_none plugin to use the views_plugin_cache_time plugin. Once enabled, all your sites uncached views will be using time-based caching.

### Why

Views hides it's cache settings. It's easy to forget to set. Someone will remember to do it later and later often never comes. Or maybe your content admins have access to views_ui. Whatever the reason, this enforces time-based caching.
