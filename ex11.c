


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>C_Exercises/ex11.c at ex10_Arrays_of_Strings · Brandon-Foster/C_Exercises</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="https://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta property="og:image" content="https://github.global.ssl.fastly.net/images/modules/logos_page/Octocat.png">
    <meta name="hostname" content="github-fe121-cp1-prd.iad.github.net">
    <meta name="ruby" content="ruby 1.9.3p194-tcs-github-tcmalloc (2012-05-25, TCS patched 2012-05-27, GitHub v1.0.36) [x86_64-linux]">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="xhr-socket" href="/_sockets" />
    
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="C6525DE512D6170C17852352C5D" name="octolytics-dimension-request_id" /><meta content="3661961" name="octolytics-actor-id" /><meta content="Brandon-Foster" name="octolytics-actor-login" /><meta content="9787c99779b1ec6db0ce6e6379c3cf1894985c93c7ea07dc013e4dee1f0bce91" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="bnGo/WwuBh8P3F9nvRa/M34PtwPOBHc1OhUWq+Rcs+M=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-1e4633e47f8b05996d0513eaccf94c2ff0a6a243.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-a7192edf5255443a92680441f722274ed90a93eb.css" media="all" rel="stylesheet" type="text/css" />
    

    

      <script src="https://github.global.ssl.fastly.net/assets/frameworks-f86a2975a82dceee28e5afe598d1ebbfd7109d79.js" type="text/javascript"></script>
      <script src="https://github.global.ssl.fastly.net/assets/github-15065af1aa90bd5052d5662dc59db098b822916e.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="150dbead5d79b419ec8e5c73a14151c0">

        <link data-pjax-transient rel='permalink' href='/Brandon-Foster/C_Exercises/blob/15d996b480b6776cbeeb127f529fd6bf1b5d5b50/ex11.c'>
  <meta property="og:title" content="C_Exercises"/>
  <meta property="og:type" content="githubog:gitrepository"/>
  <meta property="og:url" content="https://github.com/Brandon-Foster/C_Exercises"/>
  <meta property="og:image" content="https://github.global.ssl.fastly.net/images/gravatars/gravatar-user-420.png"/>
  <meta property="og:site_name" content="GitHub"/>
  <meta property="og:description" content="C_Exercises - Exercises following along with &quot;Learn C The Hard Way&quot; (http://c.learncodethehardway.org/) by Zed Shaw"/>

  <meta name="description" content="C_Exercises - Exercises following along with &quot;Learn C The Hard Way&quot; (http://c.learncodethehardway.org/) by Zed Shaw" />

  <meta content="3661961" name="octolytics-dimension-user_id" /><meta content="Brandon-Foster" name="octolytics-dimension-user_login" /><meta content="11887083" name="octolytics-dimension-repository_id" /><meta content="Brandon-Foster/C_Exercises" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="11887083" name="octolytics-dimension-repository_network_root_id" /><meta content="Brandon-Foster/C_Exercises" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/Brandon-Foster/C_Exercises/commits/ex10_Arrays_of_Strings.atom" rel="alternate" title="Recent Commits to C_Exercises:ex10_Arrays_of_Strings" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production linux vis-public page-blob">
    <div class="wrapper">
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    <div class="divider-vertical"></div>

    
    <a href="/notifications" class="notification-indicator tooltipped downwards" data-gotokey="n" title="You have no unread notifications">
        <span class="mail-status all-read"></span>
</a>    <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="Brandon-Foster"
      data-repo="Brandon-Foster/C_Exercises"
      data-branch="ex10_Arrays_of_Strings"
      data-sha="267fdbf12e86098bf50f7b8b60020cc871bea116"
  >

    <input type="hidden" name="nwo" value="Brandon-Foster/C_Exercises" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/Brandon-Foster" class="name">
        <img height="20" src="https://2.gravatar.com/avatar/ffa980c9355087689025f95bab8713d2?d=https%3A%2F%2Fidenticons.github.com%2Fed57fc39bbb6234f0576d935ac5738b9.png&amp;s=140" width="20" /> Brandon-Foster
      </a>
    </li>

      <li>
        <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo" aria-label="Create a new repo">
          <span class="octicon octicon-repo-create"></span>
        </a>
      </li>

      <li>
        <a href="/settings/profile" id="account_settings"
          class="tooltipped downwards"
          aria-label="Account settings "
          title="Account settings ">
          <span class="octicon octicon-tools"></span>
        </a>
      </li>
      <li>
        <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out" aria-label="Sign out">
          <span class="octicon octicon-log-out"></span>
        </a>
      </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>



    <li class="section-title">
      <span title="Brandon-Foster/C_Exercises">This repository</span>
    </li>
    <li>
      <a href="/Brandon-Foster/C_Exercises/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>
      <li>
        <a href="/Brandon-Foster/C_Exercises/settings/collaboration"><span class="octicon octicon-person-add"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

      




          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="bnGo/WwuBh8P3F9nvRa/M34PtwPOBHc1OhUWq+Rcs+M=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="11887083" />

    <div class="select-menu js-menu-container js-select-menu">
        <a class="social-count js-social-count" href="/Brandon-Foster/C_Exercises/watchers">
          1
        </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0">
        <span class="js-select-button">
          <span class="octicon octicon-eye-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  
<div class="js-toggler-container js-social-container starring-container ">
  <a href="/Brandon-Foster/C_Exercises/unstar" class="minibutton with-count js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
    <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
  </a>
  <a href="/Brandon-Foster/C_Exercises/star" class="minibutton with-count js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
    <span class="octicon octicon-star"></span><span class="text">Star</span>
  </a>
  <a class="social-count js-social-count" href="/Brandon-Foster/C_Exercises/stargazers">0</a>
</div>

  </li>


        <li>
          <a href="/Brandon-Foster/C_Exercises/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/Brandon-Foster/C_Exercises/network" class="social-count">0</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author">
            <a href="/Brandon-Foster" class="url fn" itemprop="url" rel="author"><span itemprop="title">Brandon-Foster</span></a></span
          ><span class="repohead-name-divider">/</span><strong
          ><a href="/Brandon-Foster/C_Exercises" class="js-current-repository js-repo-home-link">C_Exercises</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">

      <div class="repository-with-sidebar repo-container ">

        <div class="repository-sidebar">
            

<div class="repo-nav repo-nav-full js-repository-container-pjax js-octicon-loaders">
  <div class="repo-nav-contents">
    <ul class="repo-menu">
      <li class="tooltipped leftwards" title="Code">
        <a href="/Brandon-Foster/C_Exercises/tree/ex10_Arrays_of_Strings" aria-label="Code" class="js-selected-navigation-item selected" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /Brandon-Foster/C_Exercises/tree/ex10_Arrays_of_Strings">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped leftwards" title="Issues">
          <a href="/Brandon-Foster/C_Exercises/issues" aria-label="Issues" class="js-selected-navigation-item js-disable-pjax" data-gotokey="i" data-selected-links="repo_issues /Brandon-Foster/C_Exercises/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped leftwards" title="Pull Requests"><a href="/Brandon-Foster/C_Exercises/pulls" aria-label="Pull Requests" class="js-selected-navigation-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /Brandon-Foster/C_Exercises/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped leftwards" title="Wiki">
          <a href="/Brandon-Foster/C_Exercises/wiki" aria-label="Wiki" class="js-selected-navigation-item " data-pjax="true" data-selected-links="repo_wiki /Brandon-Foster/C_Exercises/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="repo-menu-separator"></div>
    <ul class="repo-menu">

      <li class="tooltipped leftwards" title="Pulse">
        <a href="/Brandon-Foster/C_Exercises/pulse" aria-label="Pulse" class="js-selected-navigation-item " data-pjax="true" data-selected-links="pulse /Brandon-Foster/C_Exercises/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Graphs">
        <a href="/Brandon-Foster/C_Exercises/graphs" aria-label="Graphs" class="js-selected-navigation-item " data-pjax="true" data-selected-links="repo_graphs repo_contributors /Brandon-Foster/C_Exercises/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Network">
        <a href="/Brandon-Foster/C_Exercises/network" aria-label="Network" class="js-selected-navigation-item js-disable-pjax" data-selected-links="repo_network /Brandon-Foster/C_Exercises/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


      <div class="repo-menu-separator"></div>
      <ul class="repo-menu">
        <li class="tooltipped leftwards" title="Settings">
          <a href="/Brandon-Foster/C_Exercises/settings" data-pjax aria-label="Settings">
            <span class="octicon octicon-tools"></span> <span class="full-word">Settings</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </a>
        </li>
      </ul>
  </div>
</div>

            <div class="only-with-full-nav">
              

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=push">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/Brandon-Foster/C_Exercises.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Brandon-Foster/C_Exercises.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=push">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:Brandon-Foster/C_Exercises.git" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:Brandon-Foster/C_Exercises.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=push">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/Brandon-Foster/C_Exercises" readonly="readonly">

    <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Brandon-Foster/C_Exercises" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="octicon help tooltipped upwards" title="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



                <a href="/Brandon-Foster/C_Exercises/archive/ex10_Arrays_of_Strings.zip"
                   class="minibutton sidebar-button"
                   title="Download this repository as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
            </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:3689f2b547db772a46a470ccfe606c10 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:3689f2b547db772a46a470ccfe606c10 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/Brandon-Foster/C_Exercises/find/ex10_Arrays_of_Strings" data-pjax data-hotkey="t" style="display:none">Show File Finder</a>

<div class="file-navigation">
  


<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="ex10_Arrays_of_Strings"
    role="button" aria-label="Switch branches or tags" tabindex="0">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">ex10_Arrays_of…</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex4_UsingValgrind/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex4_UsingValgrind" data-skip-pjax="true" rel="nofollow" title="ex4_UsingValgrind">ex4_UsingValgrind</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex5_StructureOfCProgram/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex5_StructureOfCProgram" data-skip-pjax="true" rel="nofollow" title="ex5_StructureOfCProgram">ex5_StructureOfCProgram</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex6_DataTypes/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex6_DataTypes" data-skip-pjax="true" rel="nofollow" title="ex6_DataTypes">ex6_DataTypes</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex7_MoreVariablesSomeMath/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex7_MoreVariablesSomeMath" data-skip-pjax="true" rel="nofollow" title="ex7_MoreVariablesSomeMath">ex7_MoreVariablesSomeMath</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex8_SizesAndArrays/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex8_SizesAndArrays" data-skip-pjax="true" rel="nofollow" title="ex8_SizesAndArrays">ex8_SizesAndArrays</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex9_ArraysAndStrings/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex9_ArraysAndStrings" data-skip-pjax="true" rel="nofollow" title="ex9_ArraysAndStrings">ex9_ArraysAndStrings</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex10_Arrays_of_Strings/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex10_Arrays_of_Strings" data-skip-pjax="true" rel="nofollow" title="ex10_Arrays_of_Strings">ex10_Arrays_of_Strings</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex11_While_Loops/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex11_While_Loops" data-skip-pjax="true" rel="nofollow" title="ex11_While_Loops">ex11_While_Loops</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/ex12_If_Statements/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ex12_If_Statements" data-skip-pjax="true" rel="nofollow" title="ex12_If_Statements">ex12_If_Statements</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/exercise2/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="exercise2" data-skip-pjax="true" rel="nofollow" title="exercise2">exercise2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/exercise3/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="exercise3" data-skip-pjax="true" rel="nofollow" title="exercise3">exercise3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Brandon-Foster/C_Exercises/blob/master/ex11.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" data-skip-pjax="true" rel="nofollow" title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <form accept-charset="UTF-8" action="/Brandon-Foster/C_Exercises/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="bnGo/WwuBh8P3F9nvRa/M34PtwPOBHc1OhUWq+Rcs+M=" /></div>
            <span class="octicon octicon-git-branch-create select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <h4>Create branch: <span class="js-new-item-name"></span></h4>
              <span class="description">from ‘ex10_Arrays_of_Strings’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="ex10_Arrays_of_Strings" />
            <input type="hidden" name="path" id="branch" value="ex11.c" />
          </form> <!-- /.select-menu-item -->

      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Brandon-Foster/C_Exercises/tree/ex10_Arrays_of_Strings" data-branch="ex10_Arrays_of_Strings" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">C_Exercises</span></a></span></span><span class="separator"> / </span><strong class="final-path">ex11.c</strong> <span class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="ex11.c" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://2.gravatar.com/avatar/ffa980c9355087689025f95bab8713d2?d=https%3A%2F%2Fidenticons.github.com%2Fed57fc39bbb6234f0576d935ac5738b9.png&amp;s=140" width="24" />
    <span class="author"><a href="/Brandon-Foster" rel="author">Brandon-Foster</a></span>
    <time class="js-relative-date" datetime="2013-09-14T20:10:08-07:00" title="2013-09-14 20:10:08">September 14, 2013</time>
    <div class="commit-title">
        <a href="/Brandon-Foster/C_Exercises/commit/449ec7b531e6ee96e6807ac875a9528d5627e375" class="message" data-pjax="true" title="Do exercise 11">Do exercise 11</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li class="facebox-user-list-item">
          <img height="24" src="https://2.gravatar.com/avatar/ffa980c9355087689025f95bab8713d2?d=https%3A%2F%2Fidenticons.github.com%2Fed57fc39bbb6234f0576d935ac5738b9.png&amp;s=140" width="24" />
          <a href="/Brandon-Foster">Brandon-Foster</a>
        </li>
      </ul>
    </div>
  </div>


<div id="files" class="bubble">
  <div class="file">
    <div class="meta">
      <div class="info">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
          <span>27 lines (23 sloc)</span>
        <span>0.453 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
                <a class="minibutton"
                   href="/Brandon-Foster/C_Exercises/edit/ex10_Arrays_of_Strings/ex11.c"
                   data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
          <a href="/Brandon-Foster/C_Exercises/raw/ex10_Arrays_of_Strings/ex11.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/Brandon-Foster/C_Exercises/blame/ex10_Arrays_of_Strings/ex11.c" class="button minibutton ">Blame</a>
          <a href="/Brandon-Foster/C_Exercises/commits/ex10_Arrays_of_Strings/ex11.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
            <a class="minibutton danger empty-icon tooltipped downwards"
               href="/Brandon-Foster/C_Exercises/delete/ex10_Arrays_of_Strings/ex11.c"
               title=""
               data-method="post" data-test-id="delete-blob-file" rel="nofollow">
            Delete
          </a>
      </div><!-- /.actions -->

    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>

            </td>
            <td class="blob-line-code">
                    <div class="highlight"><pre><div class='line' id='LC1'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC2'><br/></div><div class='line' id='LC3'><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">argv</span><span class="p">[])</span></div><div class='line' id='LC4'><span class="p">{</span></div><div class='line' id='LC5'>	<span class="cm">/* iterate through each string in argv that is passed in through the</span></div><div class='line' id='LC6'><span class="cm">	 * command line</span></div><div class='line' id='LC7'><span class="cm">	 */</span></div><div class='line' id='LC8'>	<span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC9'>	<span class="k">while</span> <span class="p">(</span><span class="n">i</span> <span class="o">&lt;</span> <span class="n">argc</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC10'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;arg %d: %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC11'>		<span class="n">i</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC12'>	<span class="p">}</span></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'>	<span class="c1">// make an array of strings</span></div><div class='line' id='LC15'>	<span class="kt">char</span> <span class="o">*</span><span class="n">states</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC16'>		<span class="s">&quot;California&quot;</span><span class="p">,</span> <span class="s">&quot;Oregon&quot;</span><span class="p">,</span> <span class="s">&quot;Washington&quot;</span><span class="p">,</span> <span class="s">&quot;Texas&quot;</span></div><div class='line' id='LC17'>	<span class="p">};</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'>	<span class="kt">int</span> <span class="n">num_states</span> <span class="o">=</span> <span class="mi">4</span><span class="p">;</span></div><div class='line' id='LC20'>	<span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC21'>	<span class="k">while</span> <span class="p">(</span><span class="n">i</span> <span class="o">&lt;</span> <span class="n">num_states</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC22'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;state %d: %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">states</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC23'>		<span class="n">i</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC24'>	<span class="p">}</span></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC27'><span class="p">}</span></div></pre></div>
            </td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2013 <span title="0.03961s from github-fe121-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/Brandon-Foster/C_Exercises/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

    
  </body>
</html>

