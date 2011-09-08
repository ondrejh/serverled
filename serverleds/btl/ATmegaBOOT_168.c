
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c at new-extension from arduino/Arduino - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="9a1f7a34eeca201e20c3c7541e3eca19e1a89be7" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundle_github.css?615dc4415914822f1692ffeb95691446f898bde0" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/jquery/jquery-1.6.1.min.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundle_github.js?a4fe0e1f0bd644e228e91244bd6c0c313a3bade4" type="text/javascript"></script>

    

    
  <link rel='permalink' href='/arduino/Arduino/blob/7d8d20894c7420ad2fea81d80b66075806476179/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c'>

  <link href="https://github.com/arduino/Arduino/commits/new-extension.atom" rel="alternate" title="Recent Commits to Arduino:new-extension" type="application/atom+xml" />

    

    <meta name="description" content="Arduino - open-source electronics prototyping platform" />
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

  </head>

  

  <body class="logged_in page-blob linux env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
          <a class="logo boring" href="https://github.com/">
            
            <img alt="github" class="default" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6-hover.png" />
            <!--<![endif]-->
          </a>

        
          





  
    <div class="userbox">
      <div class="avatarname">
        <a href="https://github.com/ondrejh"><img src="https://secure.gravatar.com/avatar/d1a8f296f52db25ea9d865b31e4d5a50?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20"  /></a>
        <a href="https://github.com/ondrejh" class="name">ondrejh</a>

        
        
      </div>
      <ul class="usernav">
        <li><a href="https://github.com/">Dashboard</a></li>
        <li>
          
          <a href="https://github.com/inbox">Inbox</a>
          <a href="https://github.com/inbox" class="unread_count ">0</a>
        </li>
        <li><a href="https://github.com/account">Account Settings</a></li>
        <li><a href="/logout">Log Out</a></li>
      </ul>
    </div><!-- /.userbox -->
  


        
        <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <div class="search placeholder-field js-placeholder-field">
        <label class="placeholder" for="global-search-field">Search…</label>
        <input type="text" class="search my_repos_autocompleter" id="global-search-field" name="q" results="5" /> <input type="submit" value="Search" class="button" />
      </div>
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
    <ul class="nav">
      <li><a href="/explore">Explore GitHub</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      
      <li><a href="/blog">Blog</a></li>
      
      <li><a href="http://help.github.com">Help</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/arduino">arduino</a> /
          <strong><a href="/arduino/Arduino" class="js-current-repository">Arduino</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        
        <li>
          
            <a href="/arduino/Arduino/toggle_watch" class="minibutton btn-watch watch-button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', '9a1f7a34eeca201e20c3c7541e3eca19e1a89be7'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Watch</span></a>
          
        </li>
        
          
            <li><a href="/arduino/Arduino/fork" class="minibutton btn-fork fork-button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', '9a1f7a34eeca201e20c3c7541e3eca19e1a89be7'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
          

          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers ">
            <a href="/arduino/Arduino/watchers" title="Watchers" class="tooltipped downwards">
              460
            </a>
          </li>
          <li class="forks">
            <a href="/arduino/Arduino/network" title="Forks" class="tooltipped downwards">
              91
            </a>
          </li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/arduino/Arduino" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/arduino/Arduino/commits/new-extension" highlight="repo_commits">Commits</a></li>
    <li><a href="/arduino/Arduino/network" highlight="repo_network">Network</a></li>
    <li><a href="/arduino/Arduino/pulls" highlight="repo_pulls">Pull Requests (19)</a></li>

    

    

    
    <li><a href="/arduino/Arduino/graphs" highlight="repo_graphs">Graphs</a></li>

    

    <li class="contextswitch nochoices">
      <span class="repo-tree toggle leftwards"
            
            data-master-branch="new-extension"
            data-ref="new-extension">
        <em>Branch:</em>
        <code>new-extension</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/arduino/Arduino/branches" class="dropdown">Switch Branches (4)</a>
      <ul>
        
          
          
            <li><a href="/arduino/Arduino/blob/master/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">master</a></li>
          
        
          
            <li><strong>new-extension &#x2713;</strong></li>
            
          
          
            <li><a href="/arduino/Arduino/blob/platforms/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">platforms</a></li>
          
        
          
          
            <li><a href="/arduino/Arduino/blob/stringOptimization/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">stringOptimization</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown ">Switch Tags (22)</a>
              <ul>
                      
              <li><a href="/arduino/Arduino/blob/0022/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0022</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0021/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0021</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0020/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0020</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0019/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0019</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0018/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0018</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0017/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0017</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0016/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0016</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0015/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0015</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0014/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0014</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0013/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0013</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0012/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0012</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0011/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0011</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0010/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0010</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0009/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0009</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0008/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0008</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0007/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0007</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0006/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0006</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0005/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0005</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0004/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0004</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0003/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0003</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/0002/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">0002</a></li>
            
                      
              <li><a href="/arduino/Arduino/blob/1.0-beta2/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">1.0-beta2</a></li>
            
                  </ul>
      
    </li>
    <li>
    
    <a href="/arduino/Arduino/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <a href="/arduino/Arduino/downloads" class="download-source" data-facebox-url="/arduino/Arduino/archives/new-extension" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>
      

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>open-source electronics prototyping platform
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/arduino/Arduino/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="9a1f7a34eeca201e20c3c7541e3eca19e1a89be7" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="open-source electronics prototyping platform">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://www.arduino.cc/" rel="nofollow">http://www.arduino.cc/</a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/arduino/Arduino/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="9a1f7a34eeca201e20c3c7541e3eca19e1a89be7" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="http://www.arduino.cc/">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div class="url-box">
  

  <ul class="clone-urls">
    
      
      <li class="http_clone_url"><a href="https://github.com/arduino/Arduino.git" data-permissions="Read-Only">HTTP</a></li>
      <li class="public_clone_url"><a href="git://github.com/arduino/Arduino.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" class="url-field" />
        <span style="display:none" id="clippy_4766" class="url-box-clippy"></span>
      <span id="clippy_tooltip_clippy_4766" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_4766&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_4766&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p class="url-description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none" data-tree-list-url="/arduino/Arduino/tree-list/7d8d20894c7420ad2fea81d80b66075806476179" data-blob-url-prefix="/arduino/Arduino/blob/7d8d20894c7420ad2fea81d80b66075806476179">
      <div class="breadcrumb">
        <b><a href="/arduino/Arduino">Arduino</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/arduino/Arduino/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  













  <div class="commit commit-tease js-details-container">
  
  <p class="commit-title">
    <a href="/arduino/Arduino/commit/7d8d20894c7420ad2fea81d80b66075806476179">Making Print::write(char *) non-virtual.</a>
    <a href="javascript:;" class="minibutton expander-minibutton js-details-target"><span>…</span></a>
  </p>
  
    <div class="commit-desc"><pre><a href="http://code.google.com/p/arduino/issues/detail?id=607">http://code.google.com/p/arduino/issues/detail?id=607</a></pre></div>
  
  <div class="commit-meta">
    <a href="/arduino/Arduino/commit/7d8d20894c7420ad2fea81d80b66075806476179" class="sha-block">commit <span class="sha">7d8d20894c</span></a>

    <div class="authorship">
      
      <img src="https://secure.gravatar.com/avatar/0a9eee6cab3c07372289ec0ca3849218?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20" class="gravatar" />
      <span class="author-name"><a href="/damellis">damellis</a></span>
      authored <time class="js-relative-date" datetime="2011-09-07T15:41:05-07:00" title="2011-09-07 15:41:05">September 07, 2011</time>

      
    </div>
  </div>
</div>




  <div id="slider">

  

    <div class="breadcrumb" data-path="hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c/">
      <b><a href="/arduino/Arduino/tree/bf5e928e4c610e0871bd8b57b6e57eeafb698be5" class="js-rewrite-sha">Arduino</a></b> / <a href="/arduino/Arduino/tree/bf5e928e4c610e0871bd8b57b6e57eeafb698be5/hardware" class="js-rewrite-sha">hardware</a> / <a href="/arduino/Arduino/tree/bf5e928e4c610e0871bd8b57b6e57eeafb698be5/hardware/arduino" class="js-rewrite-sha">arduino</a> / <a href="/arduino/Arduino/tree/bf5e928e4c610e0871bd8b57b6e57eeafb698be5/hardware/arduino/bootloaders" class="js-rewrite-sha">bootloaders</a> / <a href="/arduino/Arduino/tree/bf5e928e4c610e0871bd8b57b6e57eeafb698be5/hardware/arduino/bootloaders/atmega" class="js-rewrite-sha">atmega</a> / ATmegaBOOT_168.c       <span style="display:none" id="clippy_1577" class="clippy">hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_1577&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_1577&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c/" data-permalink-url="/arduino/Arduino/blob/bf5e928e4c610e0871bd8b57b6e57eeafb698be5/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c" data-title="hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c at new-extension from arduino/Arduino - GitHub" data-type="blob">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/arduino/Arduino/edit/__current_ref__/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100755</span>
                
                  <span>1055 lines (913 sloc)</span>
                
                <span>29.917 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/arduino/Arduino/raw/new-extension/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c" id="raw-url">raw</a></li>
                
                  <li><a href="/arduino/Arduino/blame/new-extension/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">blame</a></li>
                
                <li><a href="/arduino/Arduino/commits/new-extension/hardware/arduino/bootloaders/atmega/ATmegaBOOT_168.c">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
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
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
<span id="L752" rel="#L752">752</span>
<span id="L753" rel="#L753">753</span>
<span id="L754" rel="#L754">754</span>
<span id="L755" rel="#L755">755</span>
<span id="L756" rel="#L756">756</span>
<span id="L757" rel="#L757">757</span>
<span id="L758" rel="#L758">758</span>
<span id="L759" rel="#L759">759</span>
<span id="L760" rel="#L760">760</span>
<span id="L761" rel="#L761">761</span>
<span id="L762" rel="#L762">762</span>
<span id="L763" rel="#L763">763</span>
<span id="L764" rel="#L764">764</span>
<span id="L765" rel="#L765">765</span>
<span id="L766" rel="#L766">766</span>
<span id="L767" rel="#L767">767</span>
<span id="L768" rel="#L768">768</span>
<span id="L769" rel="#L769">769</span>
<span id="L770" rel="#L770">770</span>
<span id="L771" rel="#L771">771</span>
<span id="L772" rel="#L772">772</span>
<span id="L773" rel="#L773">773</span>
<span id="L774" rel="#L774">774</span>
<span id="L775" rel="#L775">775</span>
<span id="L776" rel="#L776">776</span>
<span id="L777" rel="#L777">777</span>
<span id="L778" rel="#L778">778</span>
<span id="L779" rel="#L779">779</span>
<span id="L780" rel="#L780">780</span>
<span id="L781" rel="#L781">781</span>
<span id="L782" rel="#L782">782</span>
<span id="L783" rel="#L783">783</span>
<span id="L784" rel="#L784">784</span>
<span id="L785" rel="#L785">785</span>
<span id="L786" rel="#L786">786</span>
<span id="L787" rel="#L787">787</span>
<span id="L788" rel="#L788">788</span>
<span id="L789" rel="#L789">789</span>
<span id="L790" rel="#L790">790</span>
<span id="L791" rel="#L791">791</span>
<span id="L792" rel="#L792">792</span>
<span id="L793" rel="#L793">793</span>
<span id="L794" rel="#L794">794</span>
<span id="L795" rel="#L795">795</span>
<span id="L796" rel="#L796">796</span>
<span id="L797" rel="#L797">797</span>
<span id="L798" rel="#L798">798</span>
<span id="L799" rel="#L799">799</span>
<span id="L800" rel="#L800">800</span>
<span id="L801" rel="#L801">801</span>
<span id="L802" rel="#L802">802</span>
<span id="L803" rel="#L803">803</span>
<span id="L804" rel="#L804">804</span>
<span id="L805" rel="#L805">805</span>
<span id="L806" rel="#L806">806</span>
<span id="L807" rel="#L807">807</span>
<span id="L808" rel="#L808">808</span>
<span id="L809" rel="#L809">809</span>
<span id="L810" rel="#L810">810</span>
<span id="L811" rel="#L811">811</span>
<span id="L812" rel="#L812">812</span>
<span id="L813" rel="#L813">813</span>
<span id="L814" rel="#L814">814</span>
<span id="L815" rel="#L815">815</span>
<span id="L816" rel="#L816">816</span>
<span id="L817" rel="#L817">817</span>
<span id="L818" rel="#L818">818</span>
<span id="L819" rel="#L819">819</span>
<span id="L820" rel="#L820">820</span>
<span id="L821" rel="#L821">821</span>
<span id="L822" rel="#L822">822</span>
<span id="L823" rel="#L823">823</span>
<span id="L824" rel="#L824">824</span>
<span id="L825" rel="#L825">825</span>
<span id="L826" rel="#L826">826</span>
<span id="L827" rel="#L827">827</span>
<span id="L828" rel="#L828">828</span>
<span id="L829" rel="#L829">829</span>
<span id="L830" rel="#L830">830</span>
<span id="L831" rel="#L831">831</span>
<span id="L832" rel="#L832">832</span>
<span id="L833" rel="#L833">833</span>
<span id="L834" rel="#L834">834</span>
<span id="L835" rel="#L835">835</span>
<span id="L836" rel="#L836">836</span>
<span id="L837" rel="#L837">837</span>
<span id="L838" rel="#L838">838</span>
<span id="L839" rel="#L839">839</span>
<span id="L840" rel="#L840">840</span>
<span id="L841" rel="#L841">841</span>
<span id="L842" rel="#L842">842</span>
<span id="L843" rel="#L843">843</span>
<span id="L844" rel="#L844">844</span>
<span id="L845" rel="#L845">845</span>
<span id="L846" rel="#L846">846</span>
<span id="L847" rel="#L847">847</span>
<span id="L848" rel="#L848">848</span>
<span id="L849" rel="#L849">849</span>
<span id="L850" rel="#L850">850</span>
<span id="L851" rel="#L851">851</span>
<span id="L852" rel="#L852">852</span>
<span id="L853" rel="#L853">853</span>
<span id="L854" rel="#L854">854</span>
<span id="L855" rel="#L855">855</span>
<span id="L856" rel="#L856">856</span>
<span id="L857" rel="#L857">857</span>
<span id="L858" rel="#L858">858</span>
<span id="L859" rel="#L859">859</span>
<span id="L860" rel="#L860">860</span>
<span id="L861" rel="#L861">861</span>
<span id="L862" rel="#L862">862</span>
<span id="L863" rel="#L863">863</span>
<span id="L864" rel="#L864">864</span>
<span id="L865" rel="#L865">865</span>
<span id="L866" rel="#L866">866</span>
<span id="L867" rel="#L867">867</span>
<span id="L868" rel="#L868">868</span>
<span id="L869" rel="#L869">869</span>
<span id="L870" rel="#L870">870</span>
<span id="L871" rel="#L871">871</span>
<span id="L872" rel="#L872">872</span>
<span id="L873" rel="#L873">873</span>
<span id="L874" rel="#L874">874</span>
<span id="L875" rel="#L875">875</span>
<span id="L876" rel="#L876">876</span>
<span id="L877" rel="#L877">877</span>
<span id="L878" rel="#L878">878</span>
<span id="L879" rel="#L879">879</span>
<span id="L880" rel="#L880">880</span>
<span id="L881" rel="#L881">881</span>
<span id="L882" rel="#L882">882</span>
<span id="L883" rel="#L883">883</span>
<span id="L884" rel="#L884">884</span>
<span id="L885" rel="#L885">885</span>
<span id="L886" rel="#L886">886</span>
<span id="L887" rel="#L887">887</span>
<span id="L888" rel="#L888">888</span>
<span id="L889" rel="#L889">889</span>
<span id="L890" rel="#L890">890</span>
<span id="L891" rel="#L891">891</span>
<span id="L892" rel="#L892">892</span>
<span id="L893" rel="#L893">893</span>
<span id="L894" rel="#L894">894</span>
<span id="L895" rel="#L895">895</span>
<span id="L896" rel="#L896">896</span>
<span id="L897" rel="#L897">897</span>
<span id="L898" rel="#L898">898</span>
<span id="L899" rel="#L899">899</span>
<span id="L900" rel="#L900">900</span>
<span id="L901" rel="#L901">901</span>
<span id="L902" rel="#L902">902</span>
<span id="L903" rel="#L903">903</span>
<span id="L904" rel="#L904">904</span>
<span id="L905" rel="#L905">905</span>
<span id="L906" rel="#L906">906</span>
<span id="L907" rel="#L907">907</span>
<span id="L908" rel="#L908">908</span>
<span id="L909" rel="#L909">909</span>
<span id="L910" rel="#L910">910</span>
<span id="L911" rel="#L911">911</span>
<span id="L912" rel="#L912">912</span>
<span id="L913" rel="#L913">913</span>
<span id="L914" rel="#L914">914</span>
<span id="L915" rel="#L915">915</span>
<span id="L916" rel="#L916">916</span>
<span id="L917" rel="#L917">917</span>
<span id="L918" rel="#L918">918</span>
<span id="L919" rel="#L919">919</span>
<span id="L920" rel="#L920">920</span>
<span id="L921" rel="#L921">921</span>
<span id="L922" rel="#L922">922</span>
<span id="L923" rel="#L923">923</span>
<span id="L924" rel="#L924">924</span>
<span id="L925" rel="#L925">925</span>
<span id="L926" rel="#L926">926</span>
<span id="L927" rel="#L927">927</span>
<span id="L928" rel="#L928">928</span>
<span id="L929" rel="#L929">929</span>
<span id="L930" rel="#L930">930</span>
<span id="L931" rel="#L931">931</span>
<span id="L932" rel="#L932">932</span>
<span id="L933" rel="#L933">933</span>
<span id="L934" rel="#L934">934</span>
<span id="L935" rel="#L935">935</span>
<span id="L936" rel="#L936">936</span>
<span id="L937" rel="#L937">937</span>
<span id="L938" rel="#L938">938</span>
<span id="L939" rel="#L939">939</span>
<span id="L940" rel="#L940">940</span>
<span id="L941" rel="#L941">941</span>
<span id="L942" rel="#L942">942</span>
<span id="L943" rel="#L943">943</span>
<span id="L944" rel="#L944">944</span>
<span id="L945" rel="#L945">945</span>
<span id="L946" rel="#L946">946</span>
<span id="L947" rel="#L947">947</span>
<span id="L948" rel="#L948">948</span>
<span id="L949" rel="#L949">949</span>
<span id="L950" rel="#L950">950</span>
<span id="L951" rel="#L951">951</span>
<span id="L952" rel="#L952">952</span>
<span id="L953" rel="#L953">953</span>
<span id="L954" rel="#L954">954</span>
<span id="L955" rel="#L955">955</span>
<span id="L956" rel="#L956">956</span>
<span id="L957" rel="#L957">957</span>
<span id="L958" rel="#L958">958</span>
<span id="L959" rel="#L959">959</span>
<span id="L960" rel="#L960">960</span>
<span id="L961" rel="#L961">961</span>
<span id="L962" rel="#L962">962</span>
<span id="L963" rel="#L963">963</span>
<span id="L964" rel="#L964">964</span>
<span id="L965" rel="#L965">965</span>
<span id="L966" rel="#L966">966</span>
<span id="L967" rel="#L967">967</span>
<span id="L968" rel="#L968">968</span>
<span id="L969" rel="#L969">969</span>
<span id="L970" rel="#L970">970</span>
<span id="L971" rel="#L971">971</span>
<span id="L972" rel="#L972">972</span>
<span id="L973" rel="#L973">973</span>
<span id="L974" rel="#L974">974</span>
<span id="L975" rel="#L975">975</span>
<span id="L976" rel="#L976">976</span>
<span id="L977" rel="#L977">977</span>
<span id="L978" rel="#L978">978</span>
<span id="L979" rel="#L979">979</span>
<span id="L980" rel="#L980">980</span>
<span id="L981" rel="#L981">981</span>
<span id="L982" rel="#L982">982</span>
<span id="L983" rel="#L983">983</span>
<span id="L984" rel="#L984">984</span>
<span id="L985" rel="#L985">985</span>
<span id="L986" rel="#L986">986</span>
<span id="L987" rel="#L987">987</span>
<span id="L988" rel="#L988">988</span>
<span id="L989" rel="#L989">989</span>
<span id="L990" rel="#L990">990</span>
<span id="L991" rel="#L991">991</span>
<span id="L992" rel="#L992">992</span>
<span id="L993" rel="#L993">993</span>
<span id="L994" rel="#L994">994</span>
<span id="L995" rel="#L995">995</span>
<span id="L996" rel="#L996">996</span>
<span id="L997" rel="#L997">997</span>
<span id="L998" rel="#L998">998</span>
<span id="L999" rel="#L999">999</span>
<span id="L1000" rel="#L1000">1000</span>
<span id="L1001" rel="#L1001">1001</span>
<span id="L1002" rel="#L1002">1002</span>
<span id="L1003" rel="#L1003">1003</span>
<span id="L1004" rel="#L1004">1004</span>
<span id="L1005" rel="#L1005">1005</span>
<span id="L1006" rel="#L1006">1006</span>
<span id="L1007" rel="#L1007">1007</span>
<span id="L1008" rel="#L1008">1008</span>
<span id="L1009" rel="#L1009">1009</span>
<span id="L1010" rel="#L1010">1010</span>
<span id="L1011" rel="#L1011">1011</span>
<span id="L1012" rel="#L1012">1012</span>
<span id="L1013" rel="#L1013">1013</span>
<span id="L1014" rel="#L1014">1014</span>
<span id="L1015" rel="#L1015">1015</span>
<span id="L1016" rel="#L1016">1016</span>
<span id="L1017" rel="#L1017">1017</span>
<span id="L1018" rel="#L1018">1018</span>
<span id="L1019" rel="#L1019">1019</span>
<span id="L1020" rel="#L1020">1020</span>
<span id="L1021" rel="#L1021">1021</span>
<span id="L1022" rel="#L1022">1022</span>
<span id="L1023" rel="#L1023">1023</span>
<span id="L1024" rel="#L1024">1024</span>
<span id="L1025" rel="#L1025">1025</span>
<span id="L1026" rel="#L1026">1026</span>
<span id="L1027" rel="#L1027">1027</span>
<span id="L1028" rel="#L1028">1028</span>
<span id="L1029" rel="#L1029">1029</span>
<span id="L1030" rel="#L1030">1030</span>
<span id="L1031" rel="#L1031">1031</span>
<span id="L1032" rel="#L1032">1032</span>
<span id="L1033" rel="#L1033">1033</span>
<span id="L1034" rel="#L1034">1034</span>
<span id="L1035" rel="#L1035">1035</span>
<span id="L1036" rel="#L1036">1036</span>
<span id="L1037" rel="#L1037">1037</span>
<span id="L1038" rel="#L1038">1038</span>
<span id="L1039" rel="#L1039">1039</span>
<span id="L1040" rel="#L1040">1040</span>
<span id="L1041" rel="#L1041">1041</span>
<span id="L1042" rel="#L1042">1042</span>
<span id="L1043" rel="#L1043">1043</span>
<span id="L1044" rel="#L1044">1044</span>
<span id="L1045" rel="#L1045">1045</span>
<span id="L1046" rel="#L1046">1046</span>
<span id="L1047" rel="#L1047">1047</span>
<span id="L1048" rel="#L1048">1048</span>
<span id="L1049" rel="#L1049">1049</span>
<span id="L1050" rel="#L1050">1050</span>
<span id="L1051" rel="#L1051">1051</span>
<span id="L1052" rel="#L1052">1052</span>
<span id="L1053" rel="#L1053">1053</span>
<span id="L1054" rel="#L1054">1054</span>
<span id="L1055" rel="#L1055">1055</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cp">/**********************************************************/</span></div><div class='line' id='LC2'><span class="cp">/* Serial Bootloader for Atmel megaAVR Controllers        */</span></div><div class='line' id='LC3'><span class="cp">/*                                                        */</span></div><div class='line' id='LC4'><span class="cp">/* tested with ATmega8, ATmega128 and ATmega168           */</span></div><div class='line' id='LC5'><span class="cp">/* should work with other mega&#39;s, see code for details    */</span></div><div class='line' id='LC6'><span class="cp">/*                                                        */</span></div><div class='line' id='LC7'><span class="cp">/* ATmegaBOOT.c                                           */</span></div><div class='line' id='LC8'><span class="cp">/*                                                        */</span></div><div class='line' id='LC9'><span class="cp">/*                                                        */</span></div><div class='line' id='LC10'><span class="cp">/* 20090308: integrated Mega changes into main bootloader */</span></div><div class='line' id='LC11'><span class="cp">/*           source by D. Mellis                          */</span></div><div class='line' id='LC12'><span class="cp">/* 20080930: hacked for Arduino Mega (with the 1280       */</span></div><div class='line' id='LC13'><span class="cp">/*           processor, backwards compatible)             */</span></div><div class='line' id='LC14'><span class="cp">/*           by D. Cuartielles                            */</span></div><div class='line' id='LC15'><span class="cp">/* 20070626: hacked for Arduino Diecimila (which auto-    */</span></div><div class='line' id='LC16'><span class="cp">/*           resets when a USB connection is made to it)  */</span></div><div class='line' id='LC17'><span class="cp">/*           by D. Mellis                                 */</span></div><div class='line' id='LC18'><span class="cp">/* 20060802: hacked for Arduino by D. Cuartielles         */</span></div><div class='line' id='LC19'><span class="cp">/*           based on a previous hack by D. Mellis        */</span></div><div class='line' id='LC20'><span class="cp">/*           and D. Cuartielles                           */</span></div><div class='line' id='LC21'><span class="cp">/*                                                        */</span></div><div class='line' id='LC22'><span class="cp">/* Monitor and debug functions were added to the original */</span></div><div class='line' id='LC23'><span class="cp">/* code by Dr. Erik Lins, chip45.com. (See below)         */</span></div><div class='line' id='LC24'><span class="cp">/*                                                        */</span></div><div class='line' id='LC25'><span class="cp">/* Thanks to Karl Pitrich for fixing a bootloader pin     */</span></div><div class='line' id='LC26'><span class="cp">/* problem and more informative LED blinking!             */</span></div><div class='line' id='LC27'><span class="cp">/*                                                        */</span></div><div class='line' id='LC28'><span class="cp">/* For the latest version see:                            */</span></div><div class='line' id='LC29'><span class="cp">/* http://www.chip45.com/                                 */</span></div><div class='line' id='LC30'><span class="cp">/*                                                        */</span></div><div class='line' id='LC31'><span class="cp">/* ------------------------------------------------------ */</span></div><div class='line' id='LC32'><span class="cp">/*                                                        */</span></div><div class='line' id='LC33'><span class="cp">/* based on stk500boot.c                                  */</span></div><div class='line' id='LC34'><span class="cp">/* Copyright (c) 2003, Jason P. Kyle                      */</span></div><div class='line' id='LC35'><span class="cp">/* All rights reserved.                                   */</span></div><div class='line' id='LC36'><span class="cp">/* see avr1.org for original file and information         */</span></div><div class='line' id='LC37'><span class="cp">/*                                                        */</span></div><div class='line' id='LC38'><span class="cp">/* This program is free software; you can redistribute it */</span></div><div class='line' id='LC39'><span class="cp">/* and/or modify it under the terms of the GNU General    */</span></div><div class='line' id='LC40'><span class="cp">/* Public License as published by the Free Software       */</span></div><div class='line' id='LC41'><span class="cp">/* Foundation; either version 2 of the License, or        */</span></div><div class='line' id='LC42'><span class="cp">/* (at your option) any later version.                    */</span></div><div class='line' id='LC43'><span class="cp">/*                                                        */</span></div><div class='line' id='LC44'><span class="cp">/* This program is distributed in the hope that it will   */</span></div><div class='line' id='LC45'><span class="cp">/* be useful, but WITHOUT ANY WARRANTY; without even the  */</span></div><div class='line' id='LC46'><span class="cp">/* implied warranty of MERCHANTABILITY or FITNESS FOR A   */</span></div><div class='line' id='LC47'><span class="cp">/* PARTICULAR PURPOSE.  See the GNU General Public        */</span></div><div class='line' id='LC48'><span class="cp">/* License for more details.                              */</span></div><div class='line' id='LC49'><span class="cp">/*                                                        */</span></div><div class='line' id='LC50'><span class="cp">/* You should have received a copy of the GNU General     */</span></div><div class='line' id='LC51'><span class="cp">/* Public License along with this program; if not, write  */</span></div><div class='line' id='LC52'><span class="cp">/* to the Free Software Foundation, Inc.,                 */</span></div><div class='line' id='LC53'><span class="cp">/* 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA */</span></div><div class='line' id='LC54'><span class="cp">/*                                                        */</span></div><div class='line' id='LC55'><span class="cp">/* Licence can be viewed at                               */</span></div><div class='line' id='LC56'><span class="cp">/* http://www.fsf.org/licenses/gpl.txt                    */</span></div><div class='line' id='LC57'><span class="cp">/*                                                        */</span></div><div class='line' id='LC58'><span class="cp">/* Target = Atmel AVR m128,m64,m32,m16,m8,m162,m163,m169, */</span></div><div class='line' id='LC59'><span class="cp">/* m8515,m8535. ATmega161 has a very small boot block so  */</span></div><div class='line' id='LC60'><span class="cp">/* isn&#39;t supported.                                       */</span></div><div class='line' id='LC61'><span class="cp">/*                                                        */</span></div><div class='line' id='LC62'><span class="cp">/* Tested with m168                                       */</span></div><div class='line' id='LC63'><span class="cp">/**********************************************************/</span></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><span class="cp">/* $Id$ */</span></div><div class='line' id='LC66'><br/></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'><span class="cp">/* some includes */</span></div><div class='line' id='LC69'><span class="cp">#include &lt;inttypes.h&gt;</span></div><div class='line' id='LC70'><span class="cp">#include &lt;avr/io.h&gt;</span></div><div class='line' id='LC71'><span class="cp">#include &lt;avr/pgmspace.h&gt;</span></div><div class='line' id='LC72'><span class="cp">#include &lt;avr/interrupt.h&gt;</span></div><div class='line' id='LC73'><span class="cp">#include &lt;avr/wdt.h&gt;</span></div><div class='line' id='LC74'><span class="cp">#include &lt;util/delay.h&gt;</span></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><span class="cp">/* the current avr-libc eeprom functions do not support the ATmega168 */</span></div><div class='line' id='LC77'><span class="cp">/* own eeprom write/read functions are used instead */</span></div><div class='line' id='LC78'><span class="cp">#if !defined(__AVR_ATmega168__) || !defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC79'><span class="cp">#include &lt;avr/eeprom.h&gt;</span></div><div class='line' id='LC80'><span class="cp">#endif</span></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'><span class="cp">/* Use the F_CPU defined in Makefile */</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'><span class="cp">/* 20060803: hacked by DojoCorp */</span></div><div class='line' id='LC85'><span class="cp">/* 20070626: hacked by David A. Mellis to decrease waiting time for auto-reset */</span></div><div class='line' id='LC86'><span class="cp">/* set the waiting time for the bootloader */</span></div><div class='line' id='LC87'><span class="cp">/* get this from the Makefile instead */</span></div><div class='line' id='LC88'><span class="cp">/* #define MAX_TIME_COUNT (F_CPU&gt;&gt;4) */</span></div><div class='line' id='LC89'><br/></div><div class='line' id='LC90'><span class="cp">/* 20070707: hacked by David A. Mellis - after this many errors give up and launch application */</span></div><div class='line' id='LC91'><span class="cp">#define MAX_ERROR_COUNT 5</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'><span class="cp">/* set the UART baud rate */</span></div><div class='line' id='LC94'><span class="cp">/* 20060803: hacked by DojoCorp */</span></div><div class='line' id='LC95'><span class="cp">//#define BAUD_RATE   115200</span></div><div class='line' id='LC96'><span class="cp">#ifndef BAUD_RATE</span></div><div class='line' id='LC97'><span class="cp">#define BAUD_RATE   19200</span></div><div class='line' id='LC98'><span class="cp">#endif</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'><span class="cp">/* SW_MAJOR and MINOR needs to be updated from time to time to avoid warning message from AVR Studio */</span></div><div class='line' id='LC102'><span class="cp">/* never allow AVR Studio to do an update !!!! */</span></div><div class='line' id='LC103'><span class="cp">#define HW_VER	 0x02</span></div><div class='line' id='LC104'><span class="cp">#define SW_MAJOR 0x01</span></div><div class='line' id='LC105'><span class="cp">#define SW_MINOR 0x10</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'><span class="cp">/* Adjust to suit whatever pin your hardware uses to enter the bootloader */</span></div><div class='line' id='LC109'><span class="cp">/* ATmega128 has two UARTS so two pins are used to enter bootloader and select UART */</span></div><div class='line' id='LC110'><span class="cp">/* ATmega1280 has four UARTS, but for Arduino Mega, we will only use RXD0 to get code */</span></div><div class='line' id='LC111'><span class="cp">/* BL0... means UART0, BL1... means UART1 */</span></div><div class='line' id='LC112'><span class="cp">#ifdef __AVR_ATmega128__</span></div><div class='line' id='LC113'><span class="cp">#define BL_DDR  DDRF</span></div><div class='line' id='LC114'><span class="cp">#define BL_PORT PORTF</span></div><div class='line' id='LC115'><span class="cp">#define BL_PIN  PINF</span></div><div class='line' id='LC116'><span class="cp">#define BL0     PINF7</span></div><div class='line' id='LC117'><span class="cp">#define BL1     PINF6</span></div><div class='line' id='LC118'><span class="cp">#elif defined __AVR_ATmega1280__ </span></div><div class='line' id='LC119'><span class="cp">/* we just don&#39;t do anything for the MEGA and enter bootloader on reset anyway*/</span></div><div class='line' id='LC120'><span class="cp">#else</span></div><div class='line' id='LC121'><span class="cp">/* other ATmegas have only one UART, so only one pin is defined to enter bootloader */</span></div><div class='line' id='LC122'><span class="cp">#define BL_DDR  DDRD</span></div><div class='line' id='LC123'><span class="cp">#define BL_PORT PORTD</span></div><div class='line' id='LC124'><span class="cp">#define BL_PIN  PIND</span></div><div class='line' id='LC125'><span class="cp">#define BL      PIND6</span></div><div class='line' id='LC126'><span class="cp">#endif</span></div><div class='line' id='LC127'><br/></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'><span class="cp">/* onboard LED is used to indicate, that the bootloader was entered (3x flashing) */</span></div><div class='line' id='LC130'><span class="cp">/* if monitor functions are included, LED goes on after monitor was entered */</span></div><div class='line' id='LC131'><span class="cp">#if defined __AVR_ATmega128__ || defined __AVR_ATmega1280__</span></div><div class='line' id='LC132'><span class="cp">/* Onboard LED is connected to pin PB7 (e.g. Crumb128, PROBOmega128, Savvy128, Arduino Mega) */</span></div><div class='line' id='LC133'><span class="cp">#define LED_DDR  DDRB</span></div><div class='line' id='LC134'><span class="cp">#define LED_PORT PORTB</span></div><div class='line' id='LC135'><span class="cp">#define LED_PIN  PINB</span></div><div class='line' id='LC136'><span class="cp">#define LED      PINB7</span></div><div class='line' id='LC137'><span class="cp">#else</span></div><div class='line' id='LC138'><span class="cp">/* Onboard LED is connected to pin PB5 in Arduino NG, Diecimila, and Duomilanuove */ </span></div><div class='line' id='LC139'><span class="cp">/* other boards like e.g. Crumb8, Crumb168 are using PB2 */</span></div><div class='line' id='LC140'><span class="cp">#define LED_DDR  DDRB</span></div><div class='line' id='LC141'><span class="cp">#define LED_PORT PORTB</span></div><div class='line' id='LC142'><span class="cp">#define LED_PIN  PINB</span></div><div class='line' id='LC143'><span class="cp">#define LED      PINB5</span></div><div class='line' id='LC144'><span class="cp">#endif</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'><br/></div><div class='line' id='LC147'><span class="cp">/* monitor functions will only be compiled when using ATmega128, due to bootblock size constraints */</span></div><div class='line' id='LC148'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC149'><span class="cp">#define MONITOR 1</span></div><div class='line' id='LC150'><span class="cp">#endif</span></div><div class='line' id='LC151'><br/></div><div class='line' id='LC152'><br/></div><div class='line' id='LC153'><span class="cp">/* define various device id&#39;s */</span></div><div class='line' id='LC154'><span class="cp">/* manufacturer byte is always the same */</span></div><div class='line' id='LC155'><span class="cp">#define SIG1	0x1E	</span><span class="c1">// Yep, Atmel is the only manufacturer of AVR micros.  Single source :(</span></div><div class='line' id='LC156'><br/></div><div class='line' id='LC157'><span class="cp">#if defined __AVR_ATmega1280__</span></div><div class='line' id='LC158'><span class="cp">#define SIG2	0x97</span></div><div class='line' id='LC159'><span class="cp">#define SIG3	0x03</span></div><div class='line' id='LC160'><span class="cp">#define PAGE_SIZE	0x80U	</span><span class="c1">//128 words</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'><span class="cp">#elif defined __AVR_ATmega1281__</span></div><div class='line' id='LC163'><span class="cp">#define SIG2	0x97</span></div><div class='line' id='LC164'><span class="cp">#define SIG3	0x04</span></div><div class='line' id='LC165'><span class="cp">#define PAGE_SIZE	0x80U	</span><span class="c1">//128 words</span></div><div class='line' id='LC166'><br/></div><div class='line' id='LC167'><span class="cp">#elif defined __AVR_ATmega128__</span></div><div class='line' id='LC168'><span class="cp">#define SIG2	0x97</span></div><div class='line' id='LC169'><span class="cp">#define SIG3	0x02</span></div><div class='line' id='LC170'><span class="cp">#define PAGE_SIZE	0x80U	</span><span class="c1">//128 words</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'><span class="cp">#elif defined __AVR_ATmega64__</span></div><div class='line' id='LC173'><span class="cp">#define SIG2	0x96</span></div><div class='line' id='LC174'><span class="cp">#define SIG3	0x02</span></div><div class='line' id='LC175'><span class="cp">#define PAGE_SIZE	0x80U	</span><span class="c1">//128 words</span></div><div class='line' id='LC176'><br/></div><div class='line' id='LC177'><span class="cp">#elif defined __AVR_ATmega32__</span></div><div class='line' id='LC178'><span class="cp">#define SIG2	0x95</span></div><div class='line' id='LC179'><span class="cp">#define SIG3	0x02</span></div><div class='line' id='LC180'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'><span class="cp">#elif defined __AVR_ATmega16__</span></div><div class='line' id='LC183'><span class="cp">#define SIG2	0x94</span></div><div class='line' id='LC184'><span class="cp">#define SIG3	0x03</span></div><div class='line' id='LC185'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'><span class="cp">#elif defined __AVR_ATmega8__</span></div><div class='line' id='LC188'><span class="cp">#define SIG2	0x93</span></div><div class='line' id='LC189'><span class="cp">#define SIG3	0x07</span></div><div class='line' id='LC190'><span class="cp">#define PAGE_SIZE	0x20U	</span><span class="c1">//32 words</span></div><div class='line' id='LC191'><br/></div><div class='line' id='LC192'><span class="cp">#elif defined __AVR_ATmega88__</span></div><div class='line' id='LC193'><span class="cp">#define SIG2	0x93</span></div><div class='line' id='LC194'><span class="cp">#define SIG3	0x0a</span></div><div class='line' id='LC195'><span class="cp">#define PAGE_SIZE	0x20U	</span><span class="c1">//32 words</span></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'><span class="cp">#elif defined __AVR_ATmega168__</span></div><div class='line' id='LC198'><span class="cp">#define SIG2	0x94</span></div><div class='line' id='LC199'><span class="cp">#define SIG3	0x06</span></div><div class='line' id='LC200'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'><span class="cp">#elif defined __AVR_ATmega328P__</span></div><div class='line' id='LC203'><span class="cp">#define SIG2	0x95</span></div><div class='line' id='LC204'><span class="cp">#define SIG3	0x0F</span></div><div class='line' id='LC205'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="cp">#elif defined __AVR_ATmega162__</span></div><div class='line' id='LC208'><span class="cp">#define SIG2	0x94</span></div><div class='line' id='LC209'><span class="cp">#define SIG3	0x04</span></div><div class='line' id='LC210'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC211'><br/></div><div class='line' id='LC212'><span class="cp">#elif defined __AVR_ATmega163__</span></div><div class='line' id='LC213'><span class="cp">#define SIG2	0x94</span></div><div class='line' id='LC214'><span class="cp">#define SIG3	0x02</span></div><div class='line' id='LC215'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC216'><br/></div><div class='line' id='LC217'><span class="cp">#elif defined __AVR_ATmega169__</span></div><div class='line' id='LC218'><span class="cp">#define SIG2	0x94</span></div><div class='line' id='LC219'><span class="cp">#define SIG3	0x05</span></div><div class='line' id='LC220'><span class="cp">#define PAGE_SIZE	0x40U	</span><span class="c1">//64 words</span></div><div class='line' id='LC221'><br/></div><div class='line' id='LC222'><span class="cp">#elif defined __AVR_ATmega8515__</span></div><div class='line' id='LC223'><span class="cp">#define SIG2	0x93</span></div><div class='line' id='LC224'><span class="cp">#define SIG3	0x06</span></div><div class='line' id='LC225'><span class="cp">#define PAGE_SIZE	0x20U	</span><span class="c1">//32 words</span></div><div class='line' id='LC226'><br/></div><div class='line' id='LC227'><span class="cp">#elif defined __AVR_ATmega8535__</span></div><div class='line' id='LC228'><span class="cp">#define SIG2	0x93</span></div><div class='line' id='LC229'><span class="cp">#define SIG3	0x08</span></div><div class='line' id='LC230'><span class="cp">#define PAGE_SIZE	0x20U	</span><span class="c1">//32 words</span></div><div class='line' id='LC231'><span class="cp">#endif</span></div><div class='line' id='LC232'><br/></div><div class='line' id='LC233'><br/></div><div class='line' id='LC234'><span class="cm">/* function prototypes */</span></div><div class='line' id='LC235'><span class="kt">void</span> <span class="n">putch</span><span class="p">(</span><span class="kt">char</span><span class="p">);</span></div><div class='line' id='LC236'><span class="kt">char</span> <span class="n">getch</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC237'><span class="kt">void</span> <span class="n">getNch</span><span class="p">(</span><span class="kt">uint8_t</span><span class="p">);</span></div><div class='line' id='LC238'><span class="kt">void</span> <span class="n">byte_response</span><span class="p">(</span><span class="kt">uint8_t</span><span class="p">);</span></div><div class='line' id='LC239'><span class="kt">void</span> <span class="n">nothing_response</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC240'><span class="kt">char</span> <span class="n">gethex</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC241'><span class="kt">void</span> <span class="n">puthex</span><span class="p">(</span><span class="kt">char</span><span class="p">);</span></div><div class='line' id='LC242'><span class="kt">void</span> <span class="n">flash_led</span><span class="p">(</span><span class="kt">uint8_t</span><span class="p">);</span></div><div class='line' id='LC243'><br/></div><div class='line' id='LC244'><span class="cm">/* some variables */</span></div><div class='line' id='LC245'><span class="k">union</span> <span class="n">address_union</span> <span class="p">{</span></div><div class='line' id='LC246'>	<span class="kt">uint16_t</span> <span class="n">word</span><span class="p">;</span></div><div class='line' id='LC247'>	<span class="kt">uint8_t</span>  <span class="n">byte</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC248'><span class="p">}</span> <span class="n">address</span><span class="p">;</span></div><div class='line' id='LC249'><br/></div><div class='line' id='LC250'><span class="k">union</span> <span class="n">length_union</span> <span class="p">{</span></div><div class='line' id='LC251'>	<span class="kt">uint16_t</span> <span class="n">word</span><span class="p">;</span></div><div class='line' id='LC252'>	<span class="kt">uint8_t</span>  <span class="n">byte</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC253'><span class="p">}</span> <span class="n">length</span><span class="p">;</span></div><div class='line' id='LC254'><br/></div><div class='line' id='LC255'><span class="k">struct</span> <span class="n">flags_struct</span> <span class="p">{</span></div><div class='line' id='LC256'>	<span class="kt">unsigned</span> <span class="n">eeprom</span> <span class="o">:</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC257'>	<span class="kt">unsigned</span> <span class="n">rampz</span>  <span class="o">:</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC258'><span class="p">}</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC259'><br/></div><div class='line' id='LC260'><span class="kt">uint8_t</span> <span class="n">buff</span><span class="p">[</span><span class="mi">256</span><span class="p">];</span></div><div class='line' id='LC261'><span class="kt">uint8_t</span> <span class="n">address_high</span><span class="p">;</span></div><div class='line' id='LC262'><br/></div><div class='line' id='LC263'><span class="kt">uint8_t</span> <span class="n">pagesz</span><span class="o">=</span><span class="mh">0x80</span><span class="p">;</span></div><div class='line' id='LC264'><br/></div><div class='line' id='LC265'><span class="kt">uint8_t</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC266'><span class="kt">uint8_t</span> <span class="n">bootuart</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'><span class="kt">uint8_t</span> <span class="n">error_count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC269'><br/></div><div class='line' id='LC270'><span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">app_start</span><span class="p">)(</span><span class="kt">void</span><span class="p">)</span> <span class="o">=</span> <span class="mh">0x0000</span><span class="p">;</span></div><div class='line' id='LC271'><br/></div><div class='line' id='LC272'><br/></div><div class='line' id='LC273'><span class="cm">/* main program starts here */</span></div><div class='line' id='LC274'><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC275'><span class="p">{</span></div><div class='line' id='LC276'>	<span class="kt">uint8_t</span> <span class="n">ch</span><span class="p">,</span><span class="n">ch2</span><span class="p">;</span></div><div class='line' id='LC277'>	<span class="kt">uint16_t</span> <span class="n">w</span><span class="p">;</span></div><div class='line' id='LC278'><br/></div><div class='line' id='LC279'><span class="cp">#ifdef WATCHDOG_MODS</span></div><div class='line' id='LC280'>	<span class="n">ch</span> <span class="o">=</span> <span class="n">MCUSR</span><span class="p">;</span></div><div class='line' id='LC281'>	<span class="n">MCUSR</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC282'><br/></div><div class='line' id='LC283'>	<span class="n">WDTCSR</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">WDCE</span><span class="p">)</span> <span class="o">|</span> <span class="n">_BV</span><span class="p">(</span><span class="n">WDE</span><span class="p">);</span></div><div class='line' id='LC284'>	<span class="n">WDTCSR</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'>	<span class="c1">// Check if the WDT was used to reset, in which case we dont bootload and skip straight to the code. woot.</span></div><div class='line' id='LC287'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span> <span class="p">(</span><span class="n">ch</span> <span class="o">&amp;</span>  <span class="n">_BV</span><span class="p">(</span><span class="n">EXTRF</span><span class="p">)))</span> <span class="c1">// if its a not an external reset...</span></div><div class='line' id='LC288'>		<span class="n">app_start</span><span class="p">();</span>  <span class="c1">// skip bootloader</span></div><div class='line' id='LC289'><span class="cp">#else</span></div><div class='line' id='LC290'>	<span class="n">asm</span> <span class="k">volatile</span><span class="p">(</span><span class="s">&quot;nop</span><span class="se">\n\t</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC291'><span class="cp">#endif</span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'><span class="cp">	/* set pin direction for bootloader pin and enable pullup */</span></div><div class='line' id='LC294'><span class="cp">	/* for ATmega128, two pins need to be initialized */</span></div><div class='line' id='LC295'><span class="cp">#ifdef __AVR_ATmega128__</span></div><div class='line' id='LC296'>	<span class="n">BL_DDR</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">BL0</span><span class="p">);</span></div><div class='line' id='LC297'>	<span class="n">BL_DDR</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">BL1</span><span class="p">);</span></div><div class='line' id='LC298'>	<span class="n">BL_PORT</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">BL0</span><span class="p">);</span></div><div class='line' id='LC299'>	<span class="n">BL_PORT</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">BL1</span><span class="p">);</span></div><div class='line' id='LC300'><span class="cp">#else</span></div><div class='line' id='LC301'>	<span class="cm">/* We run the bootloader regardless of the state of this pin.  Thus, don&#39;t</span></div><div class='line' id='LC302'><span class="cm">	put it in a different state than the other pins.  --DAM, 070709</span></div><div class='line' id='LC303'><span class="cm">	This also applies to Arduino Mega -- DC, 080930</span></div><div class='line' id='LC304'><span class="cm">	BL_DDR &amp;= ~_BV(BL);</span></div><div class='line' id='LC305'><span class="cm">	BL_PORT |= _BV(BL);</span></div><div class='line' id='LC306'><span class="cm">	*/</span></div><div class='line' id='LC307'><span class="cp">#endif</span></div><div class='line' id='LC308'><br/></div><div class='line' id='LC309'><br/></div><div class='line' id='LC310'><span class="cp">#ifdef __AVR_ATmega128__</span></div><div class='line' id='LC311'>	<span class="cm">/* check which UART should be used for booting */</span></div><div class='line' id='LC312'>	<span class="k">if</span><span class="p">(</span><span class="n">bit_is_clear</span><span class="p">(</span><span class="n">BL_PIN</span><span class="p">,</span> <span class="n">BL0</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC313'>		<span class="n">bootuart</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC314'>	<span class="p">}</span></div><div class='line' id='LC315'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">bit_is_clear</span><span class="p">(</span><span class="n">BL_PIN</span><span class="p">,</span> <span class="n">BL1</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC316'>		<span class="n">bootuart</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC317'>	<span class="p">}</span></div><div class='line' id='LC318'><span class="cp">#endif</span></div><div class='line' id='LC319'><br/></div><div class='line' id='LC320'><span class="cp">#if defined __AVR_ATmega1280__</span></div><div class='line' id='LC321'>	<span class="cm">/* the mega1280 chip has four serial ports ... we could eventually use any of them, or not? */</span></div><div class='line' id='LC322'>	<span class="cm">/* however, we don&#39;t wanna confuse people, to avoid making a mess, we will stick to RXD0, TXD0 */</span></div><div class='line' id='LC323'>	<span class="n">bootuart</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC324'><span class="cp">#endif</span></div><div class='line' id='LC325'><br/></div><div class='line' id='LC326'>	<span class="cm">/* check if flash is programmed already, if not start bootloader anyway */</span></div><div class='line' id='LC327'>	<span class="k">if</span><span class="p">(</span><span class="n">pgm_read_byte_near</span><span class="p">(</span><span class="mh">0x0000</span><span class="p">)</span> <span class="o">!=</span> <span class="mh">0xFF</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC328'><br/></div><div class='line' id='LC329'><span class="cp">#ifdef __AVR_ATmega128__</span></div><div class='line' id='LC330'>	<span class="cm">/* no UART was selected, start application */</span></div><div class='line' id='LC331'>	<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">bootuart</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC332'>		<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC333'>	<span class="p">}</span></div><div class='line' id='LC334'><span class="cp">#else</span></div><div class='line' id='LC335'><span class="cp">	/* check if bootloader pin is set low */</span></div><div class='line' id='LC336'><span class="cp">	/* we don&#39;t start this part neither for the m8, nor m168 */</span></div><div class='line' id='LC337'><span class="cp">	//if(bit_is_set(BL_PIN, BL)) {</span></div><div class='line' id='LC338'><span class="cp">	//      app_start();</span></div><div class='line' id='LC339'><span class="cp">	//    }</span></div><div class='line' id='LC340'><span class="cp">#endif</span></div><div class='line' id='LC341'>	<span class="p">}</span></div><div class='line' id='LC342'><br/></div><div class='line' id='LC343'><span class="cp">#ifdef __AVR_ATmega128__    </span></div><div class='line' id='LC344'>	<span class="cm">/* no bootuart was selected, default to uart 0 */</span></div><div class='line' id='LC345'>	<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">bootuart</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC346'>		<span class="n">bootuart</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC347'>	<span class="p">}</span></div><div class='line' id='LC348'><span class="cp">#endif</span></div><div class='line' id='LC349'><br/></div><div class='line' id='LC350'><br/></div><div class='line' id='LC351'><span class="cp">	/* initialize UART(s) depending on CPU defined */</span></div><div class='line' id='LC352'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC353'>	<span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC354'>		<span class="n">UBRR0L</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC355'>		<span class="n">UBRR0H</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC356'>		<span class="n">UCSR0A</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC357'>		<span class="n">UCSR0C</span> <span class="o">=</span> <span class="mh">0x06</span><span class="p">;</span></div><div class='line' id='LC358'>		<span class="n">UCSR0B</span> <span class="o">=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">TXEN0</span><span class="p">)</span><span class="o">|</span><span class="n">_BV</span><span class="p">(</span><span class="n">RXEN0</span><span class="p">);</span></div><div class='line' id='LC359'>	<span class="p">}</span></div><div class='line' id='LC360'>	<span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC361'>		<span class="n">UBRR1L</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC362'>		<span class="n">UBRR1H</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC363'>		<span class="n">UCSR1A</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC364'>		<span class="n">UCSR1C</span> <span class="o">=</span> <span class="mh">0x06</span><span class="p">;</span></div><div class='line' id='LC365'>		<span class="n">UCSR1B</span> <span class="o">=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">TXEN1</span><span class="p">)</span><span class="o">|</span><span class="n">_BV</span><span class="p">(</span><span class="n">RXEN1</span><span class="p">);</span></div><div class='line' id='LC366'>	<span class="p">}</span></div><div class='line' id='LC367'><span class="cp">#elif defined __AVR_ATmega163__</span></div><div class='line' id='LC368'>	<span class="n">UBRR</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC369'>	<span class="n">UBRRHI</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC370'>	<span class="n">UCSRA</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC371'>	<span class="n">UCSRB</span> <span class="o">=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">TXEN</span><span class="p">)</span><span class="o">|</span><span class="n">_BV</span><span class="p">(</span><span class="n">RXEN</span><span class="p">);</span>	</div><div class='line' id='LC372'><span class="cp">#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC373'><br/></div><div class='line' id='LC374'><span class="cp">#ifdef DOUBLE_SPEED</span></div><div class='line' id='LC375'>	<span class="n">UCSR0A</span> <span class="o">=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">U2X0</span><span class="p">);</span> <span class="c1">//Double speed mode USART0</span></div><div class='line' id='LC376'>	<span class="n">UBRR0L</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">8L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC377'>	<span class="n">UBRR0H</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">8L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC378'><span class="cp">#else</span></div><div class='line' id='LC379'>	<span class="n">UBRR0L</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC380'>	<span class="n">UBRR0H</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC381'><span class="cp">#endif</span></div><div class='line' id='LC382'><br/></div><div class='line' id='LC383'>	<span class="n">UCSR0B</span> <span class="o">=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">RXEN0</span><span class="p">)</span> <span class="o">|</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">TXEN0</span><span class="p">);</span></div><div class='line' id='LC384'>	<span class="n">UCSR0C</span> <span class="o">=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">UCSZ00</span><span class="p">)</span> <span class="o">|</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">UCSZ01</span><span class="p">);</span></div><div class='line' id='LC385'><br/></div><div class='line' id='LC386'>	<span class="cm">/* Enable internal pull-up resistor on pin D0 (RX), in order</span></div><div class='line' id='LC387'><span class="cm">	to supress line noise that prevents the bootloader from</span></div><div class='line' id='LC388'><span class="cm">	timing out (DAM: 20070509) */</span></div><div class='line' id='LC389'>	<span class="n">DDRD</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">PIND0</span><span class="p">);</span></div><div class='line' id='LC390'>	<span class="n">PORTD</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">PIND0</span><span class="p">);</span></div><div class='line' id='LC391'><span class="cp">#elif defined __AVR_ATmega8__</span></div><div class='line' id='LC392'>	<span class="cm">/* m8 */</span></div><div class='line' id='LC393'>	<span class="n">UBRRH</span> <span class="o">=</span> <span class="p">(((</span><span class="n">F_CPU</span><span class="o">/</span><span class="n">BAUD_RATE</span><span class="p">)</span><span class="o">/</span><span class="mi">16</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span><span class="o">&gt;&gt;</span><span class="mi">8</span><span class="p">;</span> 	<span class="c1">// set baud rate</span></div><div class='line' id='LC394'>	<span class="n">UBRRL</span> <span class="o">=</span> <span class="p">(((</span><span class="n">F_CPU</span><span class="o">/</span><span class="n">BAUD_RATE</span><span class="p">)</span><span class="o">/</span><span class="mi">16</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC395'>	<span class="n">UCSRB</span> <span class="o">=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">RXEN</span><span class="p">)</span><span class="o">|</span><span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">TXEN</span><span class="p">);</span>  <span class="c1">// enable Rx &amp; Tx</span></div><div class='line' id='LC396'>	<span class="n">UCSRC</span> <span class="o">=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">URSEL</span><span class="p">)</span><span class="o">|</span><span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">UCSZ1</span><span class="p">)</span><span class="o">|</span><span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">UCSZ0</span><span class="p">);</span>  <span class="c1">// config USART; 8N1</span></div><div class='line' id='LC397'><span class="cp">#else</span></div><div class='line' id='LC398'>	<span class="cm">/* m16,m32,m169,m8515,m8535 */</span></div><div class='line' id='LC399'>	<span class="n">UBRRL</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint8_t</span><span class="p">)(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC400'>	<span class="n">UBRRH</span> <span class="o">=</span> <span class="p">(</span><span class="n">F_CPU</span><span class="o">/</span><span class="p">(</span><span class="n">BAUD_RATE</span><span class="o">*</span><span class="mi">16L</span><span class="p">)</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC401'>	<span class="n">UCSRA</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC402'>	<span class="n">UCSRC</span> <span class="o">=</span> <span class="mh">0x06</span><span class="p">;</span></div><div class='line' id='LC403'>	<span class="n">UCSRB</span> <span class="o">=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">TXEN</span><span class="p">)</span><span class="o">|</span><span class="n">_BV</span><span class="p">(</span><span class="n">RXEN</span><span class="p">);</span></div><div class='line' id='LC404'><span class="cp">#endif</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'><span class="cp">#if defined __AVR_ATmega1280__</span></div><div class='line' id='LC407'>	<span class="cm">/* Enable internal pull-up resistor on pin D0 (RX), in order</span></div><div class='line' id='LC408'><span class="cm">	to supress line noise that prevents the bootloader from</span></div><div class='line' id='LC409'><span class="cm">	timing out (DAM: 20070509) */</span></div><div class='line' id='LC410'>	<span class="cm">/* feature added to the Arduino Mega --DC: 080930 */</span></div><div class='line' id='LC411'>	<span class="n">DDRE</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">PINE0</span><span class="p">);</span></div><div class='line' id='LC412'>	<span class="n">PORTE</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">PINE0</span><span class="p">);</span></div><div class='line' id='LC413'><span class="cp">#endif</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'><br/></div><div class='line' id='LC416'>	<span class="cm">/* set LED pin as output */</span></div><div class='line' id='LC417'>	<span class="n">LED_DDR</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC418'><br/></div><div class='line' id='LC419'><br/></div><div class='line' id='LC420'><span class="cp">	/* flash onboard LED to signal entering of bootloader */</span></div><div class='line' id='LC421'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC422'>	<span class="c1">// 4x for UART0, 5x for UART1</span></div><div class='line' id='LC423'>	<span class="n">flash_led</span><span class="p">(</span><span class="n">NUM_LED_FLASHES</span> <span class="o">+</span> <span class="n">bootuart</span><span class="p">);</span></div><div class='line' id='LC424'><span class="cp">#else</span></div><div class='line' id='LC425'>	<span class="n">flash_led</span><span class="p">(</span><span class="n">NUM_LED_FLASHES</span><span class="p">);</span></div><div class='line' id='LC426'><span class="cp">#endif</span></div><div class='line' id='LC427'><br/></div><div class='line' id='LC428'>	<span class="cm">/* 20050803: by DojoCorp, this is one of the parts provoking the</span></div><div class='line' id='LC429'><span class="cm">		 system to stop listening, cancelled from the original */</span></div><div class='line' id='LC430'>	<span class="c1">//putch(&#39;\0&#39;);</span></div><div class='line' id='LC431'><br/></div><div class='line' id='LC432'>	<span class="cm">/* forever loop */</span></div><div class='line' id='LC433'>	<span class="k">for</span> <span class="p">(;;)</span> <span class="p">{</span></div><div class='line' id='LC434'><br/></div><div class='line' id='LC435'>	<span class="cm">/* get character from UART */</span></div><div class='line' id='LC436'>	<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC437'><br/></div><div class='line' id='LC438'>	<span class="cm">/* A bunch of if...else if... gives smaller code than switch...case ! */</span></div><div class='line' id='LC439'><br/></div><div class='line' id='LC440'>	<span class="cm">/* Hello is anyone home ? */</span> </div><div class='line' id='LC441'>	<span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;0&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC442'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC443'>	<span class="p">}</span></div><div class='line' id='LC444'><br/></div><div class='line' id='LC445'><br/></div><div class='line' id='LC446'>	<span class="cm">/* Request programmer ID */</span></div><div class='line' id='LC447'>	<span class="cm">/* Not using PROGMEM string due to boot block in m128 being beyond 64kB boundry  */</span></div><div class='line' id='LC448'>	<span class="cm">/* Would need to selectively manipulate RAMPZ, and it&#39;s only 9 characters anyway so who cares.  */</span></div><div class='line' id='LC449'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;1&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC450'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC451'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC452'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;A&#39;</span><span class="p">);</span></div><div class='line' id='LC453'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;V&#39;</span><span class="p">);</span></div><div class='line' id='LC454'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;R&#39;</span><span class="p">);</span></div><div class='line' id='LC455'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39; &#39;</span><span class="p">);</span></div><div class='line' id='LC456'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;I&#39;</span><span class="p">);</span></div><div class='line' id='LC457'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;S&#39;</span><span class="p">);</span></div><div class='line' id='LC458'>			<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;P&#39;</span><span class="p">);</span></div><div class='line' id='LC459'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC460'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC461'>			<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span></div><div class='line' id='LC462'>				<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC463'>		<span class="p">}</span></div><div class='line' id='LC464'>	<span class="p">}</span></div><div class='line' id='LC465'><br/></div><div class='line' id='LC466'><br/></div><div class='line' id='LC467'>	<span class="cm">/* AVR ISP/STK500 board commands  DON&#39;T CARE so default nothing_response */</span></div><div class='line' id='LC468'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;@&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC469'>		<span class="n">ch2</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC470'>		<span class="k">if</span> <span class="p">(</span><span class="n">ch2</span><span class="o">&gt;</span><span class="mh">0x85</span><span class="p">)</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC471'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC472'>	<span class="p">}</span></div><div class='line' id='LC473'><br/></div><div class='line' id='LC474'><br/></div><div class='line' id='LC475'>	<span class="cm">/* AVR ISP/STK500 board requests */</span></div><div class='line' id='LC476'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;A&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC477'>		<span class="n">ch2</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC478'>		<span class="k">if</span><span class="p">(</span><span class="n">ch2</span><span class="o">==</span><span class="mh">0x80</span><span class="p">)</span> <span class="n">byte_response</span><span class="p">(</span><span class="n">HW_VER</span><span class="p">);</span>		<span class="c1">// Hardware version</span></div><div class='line' id='LC479'>		<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch2</span><span class="o">==</span><span class="mh">0x81</span><span class="p">)</span> <span class="n">byte_response</span><span class="p">(</span><span class="n">SW_MAJOR</span><span class="p">);</span>	<span class="c1">// Software major version</span></div><div class='line' id='LC480'>		<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch2</span><span class="o">==</span><span class="mh">0x82</span><span class="p">)</span> <span class="n">byte_response</span><span class="p">(</span><span class="n">SW_MINOR</span><span class="p">);</span>	<span class="c1">// Software minor version</span></div><div class='line' id='LC481'>		<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch2</span><span class="o">==</span><span class="mh">0x98</span><span class="p">)</span> <span class="n">byte_response</span><span class="p">(</span><span class="mh">0x03</span><span class="p">);</span>		<span class="c1">// Unknown but seems to be required by avr studio 3.56</span></div><div class='line' id='LC482'>		<span class="k">else</span> <span class="n">byte_response</span><span class="p">(</span><span class="mh">0x00</span><span class="p">);</span>				<span class="c1">// Covers various unnecessary responses we don&#39;t care about</span></div><div class='line' id='LC483'>	<span class="p">}</span></div><div class='line' id='LC484'><br/></div><div class='line' id='LC485'><br/></div><div class='line' id='LC486'>	<span class="cm">/* Device Parameters  DON&#39;T CARE, DEVICE IS FIXED  */</span></div><div class='line' id='LC487'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;B&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC488'>		<span class="n">getNch</span><span class="p">(</span><span class="mi">20</span><span class="p">);</span></div><div class='line' id='LC489'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC490'>	<span class="p">}</span></div><div class='line' id='LC491'><br/></div><div class='line' id='LC492'><br/></div><div class='line' id='LC493'>	<span class="cm">/* Parallel programming stuff  DON&#39;T CARE  */</span></div><div class='line' id='LC494'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;E&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC495'>		<span class="n">getNch</span><span class="p">(</span><span class="mi">5</span><span class="p">);</span></div><div class='line' id='LC496'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC497'>	<span class="p">}</span></div><div class='line' id='LC498'><br/></div><div class='line' id='LC499'><br/></div><div class='line' id='LC500'>	<span class="cm">/* P: Enter programming mode  */</span></div><div class='line' id='LC501'>	<span class="cm">/* R: Erase device, don&#39;t care as we will erase one page at a time anyway.  */</span></div><div class='line' id='LC502'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;P&#39;</span> <span class="o">||</span> <span class="n">ch</span><span class="o">==</span><span class="sc">&#39;R&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC503'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC504'>	<span class="p">}</span></div><div class='line' id='LC505'><br/></div><div class='line' id='LC506'><br/></div><div class='line' id='LC507'>	<span class="cm">/* Leave programming mode  */</span></div><div class='line' id='LC508'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;Q&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC509'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC510'><span class="cp">#ifdef WATCHDOG_MODS</span></div><div class='line' id='LC511'>		<span class="c1">// autoreset via watchdog (sneaky!)</span></div><div class='line' id='LC512'>		<span class="n">WDTCSR</span> <span class="o">=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">WDE</span><span class="p">);</span></div><div class='line' id='LC513'>		<span class="k">while</span> <span class="p">(</span><span class="mi">1</span><span class="p">);</span> <span class="c1">// 16 ms</span></div><div class='line' id='LC514'><span class="cp">#endif</span></div><div class='line' id='LC515'>	<span class="p">}</span></div><div class='line' id='LC516'><br/></div><div class='line' id='LC517'><br/></div><div class='line' id='LC518'>	<span class="cm">/* Set address, little endian. EEPROM in bytes, FLASH in words  */</span></div><div class='line' id='LC519'>	<span class="cm">/* Perhaps extra address bytes may be added in future to support &gt; 128kB FLASH.  */</span></div><div class='line' id='LC520'>	<span class="cm">/* This might explain why little endian was used here, big endian used everywhere else.  */</span></div><div class='line' id='LC521'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;U&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC522'>		<span class="n">address</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC523'>		<span class="n">address</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC524'>		<span class="n">nothing_response</span><span class="p">();</span></div><div class='line' id='LC525'>	<span class="p">}</span></div><div class='line' id='LC526'><br/></div><div class='line' id='LC527'><br/></div><div class='line' id='LC528'>	<span class="cm">/* Universal SPI programming command, disabled.  Would be used for fuses and lock bits.  */</span></div><div class='line' id='LC529'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;V&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC530'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="mh">0x30</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC531'>			<span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC532'>			<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC533'>			<span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC534'>			<span class="k">if</span> <span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC535'>				<span class="n">byte_response</span><span class="p">(</span><span class="n">SIG1</span><span class="p">);</span></div><div class='line' id='LC536'>			<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC537'>				<span class="n">byte_response</span><span class="p">(</span><span class="n">SIG2</span><span class="p">);</span> </div><div class='line' id='LC538'>			<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC539'>				<span class="n">byte_response</span><span class="p">(</span><span class="n">SIG3</span><span class="p">);</span></div><div class='line' id='LC540'>			<span class="p">}</span> </div><div class='line' id='LC541'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC542'>			<span class="n">getNch</span><span class="p">(</span><span class="mi">3</span><span class="p">);</span></div><div class='line' id='LC543'>			<span class="n">byte_response</span><span class="p">(</span><span class="mh">0x00</span><span class="p">);</span></div><div class='line' id='LC544'>		<span class="p">}</span></div><div class='line' id='LC545'>	<span class="p">}</span></div><div class='line' id='LC546'><br/></div><div class='line' id='LC547'><br/></div><div class='line' id='LC548'>	<span class="cm">/* Write memory, length is big endian and is in bytes  */</span></div><div class='line' id='LC549'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;d&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC550'>		<span class="n">length</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC551'>		<span class="n">length</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC552'>		<span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC553'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39;E&#39;</span><span class="p">)</span> <span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC554'>		<span class="k">for</span> <span class="p">(</span><span class="n">w</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">w</span><span class="o">&lt;</span><span class="n">length</span><span class="p">.</span><span class="n">word</span><span class="p">;</span><span class="n">w</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC555'>			<span class="n">buff</span><span class="p">[</span><span class="n">w</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span>	                        <span class="c1">// Store data in buffer, can&#39;t keep up with serial data stream whilst programming pages</span></div><div class='line' id='LC556'>		<span class="p">}</span></div><div class='line' id='LC557'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC558'>			<span class="k">if</span> <span class="p">(</span><span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span><span class="p">)</span> <span class="p">{</span>		                <span class="c1">//Write to EEPROM one byte at a time</span></div><div class='line' id='LC559'>				<span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">&lt;&lt;=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC560'>				<span class="k">for</span><span class="p">(</span><span class="n">w</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">w</span><span class="o">&lt;</span><span class="n">length</span><span class="p">.</span><span class="n">word</span><span class="p">;</span><span class="n">w</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC561'><span class="cp">#if defined(__AVR_ATmega168__)  || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC562'>					<span class="k">while</span><span class="p">(</span><span class="n">EECR</span> <span class="o">&amp;</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">EEPE</span><span class="p">));</span></div><div class='line' id='LC563'>					<span class="n">EEAR</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint16_t</span><span class="p">)(</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="p">;</span></div><div class='line' id='LC564'>					<span class="n">EEDR</span> <span class="o">=</span> <span class="n">buff</span><span class="p">[</span><span class="n">w</span><span class="p">];</span></div><div class='line' id='LC565'>					<span class="n">EECR</span> <span class="o">|=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">EEMPE</span><span class="p">);</span></div><div class='line' id='LC566'>					<span class="n">EECR</span> <span class="o">|=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">EEPE</span><span class="p">);</span></div><div class='line' id='LC567'><span class="cp">#else</span></div><div class='line' id='LC568'>					<span class="n">eeprom_write_byte</span><span class="p">((</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="p">,</span><span class="n">buff</span><span class="p">[</span><span class="n">w</span><span class="p">]);</span></div><div class='line' id='LC569'><span class="cp">#endif</span></div><div class='line' id='LC570'>					<span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC571'>				<span class="p">}</span>			</div><div class='line' id='LC572'>			<span class="p">}</span></div><div class='line' id='LC573'>			<span class="k">else</span> <span class="p">{</span>					        <span class="c1">//Write to FLASH one page at a time</span></div><div class='line' id='LC574'>				<span class="k">if</span> <span class="p">(</span><span class="n">address</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span><span class="o">&gt;</span><span class="mi">127</span><span class="p">)</span> <span class="n">address_high</span> <span class="o">=</span> <span class="mh">0x01</span><span class="p">;</span>	<span class="c1">//Only possible with m128, m256 will need 3rd address byte. FIXME</span></div><div class='line' id='LC575'>				<span class="k">else</span> <span class="n">address_high</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC576'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__)</span></div><div class='line' id='LC577'>				<span class="n">RAMPZ</span> <span class="o">=</span> <span class="n">address_high</span><span class="p">;</span></div><div class='line' id='LC578'><span class="cp">#endif</span></div><div class='line' id='LC579'>				<span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">=</span> <span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">&lt;&lt;</span> <span class="mi">1</span><span class="p">;</span>	        <span class="c1">//address * 2 -&gt; byte location</span></div><div class='line' id='LC580'>				<span class="cm">/* if ((length.byte[0] &amp; 0x01) == 0x01) length.word++;	//Even up an odd number of bytes */</span></div><div class='line' id='LC581'>				<span class="k">if</span> <span class="p">((</span><span class="n">length</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">&amp;</span> <span class="mh">0x01</span><span class="p">))</span> <span class="n">length</span><span class="p">.</span><span class="n">word</span><span class="o">++</span><span class="p">;</span>	<span class="c1">//Even up an odd number of bytes</span></div><div class='line' id='LC582'>				<span class="n">cli</span><span class="p">();</span>					<span class="c1">//Disable interrupts, just to be sure</span></div><div class='line' id='LC583'><span class="cp">#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__)</span></div><div class='line' id='LC584'>				<span class="k">while</span><span class="p">(</span><span class="n">bit_is_set</span><span class="p">(</span><span class="n">EECR</span><span class="p">,</span><span class="n">EEPE</span><span class="p">));</span>			<span class="c1">//Wait for previous EEPROM writes to complete</span></div><div class='line' id='LC585'><span class="cp">#else</span></div><div class='line' id='LC586'>				<span class="k">while</span><span class="p">(</span><span class="n">bit_is_set</span><span class="p">(</span><span class="n">EECR</span><span class="p">,</span><span class="n">EEWE</span><span class="p">));</span>			<span class="c1">//Wait for previous EEPROM writes to complete</span></div><div class='line' id='LC587'><span class="cp">#endif</span></div><div class='line' id='LC588'>				<span class="n">asm</span> <span class="k">volatile</span><span class="p">(</span></div><div class='line' id='LC589'>					 <span class="s">&quot;clr	r17		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//page_word_count</span></div><div class='line' id='LC590'>					 <span class="s">&quot;lds	r30,address	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Address of FLASH location (in bytes)</span></div><div class='line' id='LC591'>					 <span class="s">&quot;lds	r31,address+1	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC592'>					 <span class="s">&quot;ldi	r28,lo8(buff)	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Start of buffer array in RAM</span></div><div class='line' id='LC593'>					 <span class="s">&quot;ldi	r29,hi8(buff)	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC594'>					 <span class="s">&quot;lds	r24,length	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Length of data to be written (in bytes)</span></div><div class='line' id='LC595'>					 <span class="s">&quot;lds	r25,length+1	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC596'>					 <span class="s">&quot;length_loop:		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Main loop, repeat for number of words in block							 							 </span></div><div class='line' id='LC597'>					 <span class="s">&quot;cpi	r17,0x00	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//If page_word_count=0 then erase page</span></div><div class='line' id='LC598'>					 <span class="s">&quot;brne	no_page_erase	</span><span class="se">\n\t</span><span class="s">&quot;</span>						 </div><div class='line' id='LC599'>					 <span class="s">&quot;wait_spm1:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC600'>					 <span class="s">&quot;lds	r16,%0		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Wait for previous spm to complete</span></div><div class='line' id='LC601'>					 <span class="s">&quot;andi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC602'>					 <span class="s">&quot;cpi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC603'>					 <span class="s">&quot;breq	wait_spm1       </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC604'>					 <span class="s">&quot;ldi	r16,0x03	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Erase page pointed to by Z</span></div><div class='line' id='LC605'>					 <span class="s">&quot;sts	%0,r16		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC606'>					 <span class="s">&quot;spm			</span><span class="se">\n\t</span><span class="s">&quot;</span>							 </div><div class='line' id='LC607'><span class="cp">#ifdef __AVR_ATmega163__</span></div><div class='line' id='LC608'>					 <span class="s">&quot;.word 0xFFFF		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC609'>					 <span class="s">&quot;nop			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC610'><span class="cp">#endif</span></div><div class='line' id='LC611'>					 <span class="s">&quot;wait_spm2:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC612'>					 <span class="s">&quot;lds	r16,%0		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Wait for previous spm to complete</span></div><div class='line' id='LC613'>					 <span class="s">&quot;andi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC614'>					 <span class="s">&quot;cpi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC615'>					 <span class="s">&quot;breq	wait_spm2       </span><span class="se">\n\t</span><span class="s">&quot;</span>									 </div><div class='line' id='LC616'><br/></div><div class='line' id='LC617'>					 <span class="s">&quot;ldi	r16,0x11	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Re-enable RWW section</span></div><div class='line' id='LC618'>					 <span class="s">&quot;sts	%0,r16		</span><span class="se">\n\t</span><span class="s">&quot;</span>						 			 </div><div class='line' id='LC619'>					 <span class="s">&quot;spm			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC620'><span class="cp">#ifdef __AVR_ATmega163__</span></div><div class='line' id='LC621'>					 <span class="s">&quot;.word 0xFFFF		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC622'>					 <span class="s">&quot;nop			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC623'><span class="cp">#endif</span></div><div class='line' id='LC624'>					 <span class="s">&quot;no_page_erase:		</span><span class="se">\n\t</span><span class="s">&quot;</span>							 </div><div class='line' id='LC625'>					 <span class="s">&quot;ld	r0,Y+		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Write 2 bytes into page buffer</span></div><div class='line' id='LC626'>					 <span class="s">&quot;ld	r1,Y+		</span><span class="se">\n\t</span><span class="s">&quot;</span>							 </div><div class='line' id='LC627'><br/></div><div class='line' id='LC628'>					 <span class="s">&quot;wait_spm3:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC629'>					 <span class="s">&quot;lds	r16,%0		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Wait for previous spm to complete</span></div><div class='line' id='LC630'>					 <span class="s">&quot;andi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC631'>					 <span class="s">&quot;cpi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC632'>					 <span class="s">&quot;breq	wait_spm3       </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC633'>					 <span class="s">&quot;ldi	r16,0x01	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Load r0,r1 into FLASH page buffer</span></div><div class='line' id='LC634'>					 <span class="s">&quot;sts	%0,r16		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC635'>					 <span class="s">&quot;spm			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC636'><br/></div><div class='line' id='LC637'>					 <span class="s">&quot;inc	r17		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//page_word_count++</span></div><div class='line' id='LC638'>					 <span class="s">&quot;cpi r17,%1	        </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC639'>					 <span class="s">&quot;brlo	same_page	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Still same page in FLASH</span></div><div class='line' id='LC640'>					 <span class="s">&quot;write_page:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC641'>					 <span class="s">&quot;clr	r17		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//New page, write current one first</span></div><div class='line' id='LC642'>					 <span class="s">&quot;wait_spm4:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC643'>					 <span class="s">&quot;lds	r16,%0		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Wait for previous spm to complete</span></div><div class='line' id='LC644'>					 <span class="s">&quot;andi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC645'>					 <span class="s">&quot;cpi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC646'>					 <span class="s">&quot;breq	wait_spm4       </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC647'><span class="cp">#ifdef __AVR_ATmega163__</span></div><div class='line' id='LC648'>					 <span class="s">&quot;andi	r30,0x80	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">// m163 requires Z6:Z1 to be zero during page write</span></div><div class='line' id='LC649'><span class="cp">#endif							 							 </span></div><div class='line' id='LC650'>					 <span class="s">&quot;ldi	r16,0x05	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Write page pointed to by Z</span></div><div class='line' id='LC651'>					 <span class="s">&quot;sts	%0,r16		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC652'>					 <span class="s">&quot;spm			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC653'><span class="cp">#ifdef __AVR_ATmega163__</span></div><div class='line' id='LC654'>					 <span class="s">&quot;.word 0xFFFF		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC655'>					 <span class="s">&quot;nop			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC656'>					 <span class="s">&quot;ori	r30,0x7E	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">// recover Z6:Z1 state after page write (had to be zero during write)</span></div><div class='line' id='LC657'><span class="cp">#endif</span></div><div class='line' id='LC658'>					 <span class="s">&quot;wait_spm5:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC659'>					 <span class="s">&quot;lds	r16,%0		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Wait for previous spm to complete</span></div><div class='line' id='LC660'>					 <span class="s">&quot;andi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC661'>					 <span class="s">&quot;cpi	r16,1           </span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC662'>					 <span class="s">&quot;breq	wait_spm5       </span><span class="se">\n\t</span><span class="s">&quot;</span>									 </div><div class='line' id='LC663'>					 <span class="s">&quot;ldi	r16,0x11	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Re-enable RWW section</span></div><div class='line' id='LC664'>					 <span class="s">&quot;sts	%0,r16		</span><span class="se">\n\t</span><span class="s">&quot;</span>						 			 </div><div class='line' id='LC665'>					 <span class="s">&quot;spm			</span><span class="se">\n\t</span><span class="s">&quot;</span>					 		 </div><div class='line' id='LC666'><span class="cp">#ifdef __AVR_ATmega163__</span></div><div class='line' id='LC667'>					 <span class="s">&quot;.word 0xFFFF		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC668'>					 <span class="s">&quot;nop			</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC669'><span class="cp">#endif</span></div><div class='line' id='LC670'>					 <span class="s">&quot;same_page:		</span><span class="se">\n\t</span><span class="s">&quot;</span>							 </div><div class='line' id='LC671'>					 <span class="s">&quot;adiw	r30,2		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Next word in FLASH</span></div><div class='line' id='LC672'>					 <span class="s">&quot;sbiw	r24,2		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//length-2</span></div><div class='line' id='LC673'>					 <span class="s">&quot;breq	final_write	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//Finished</span></div><div class='line' id='LC674'>					 <span class="s">&quot;rjmp	length_loop	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC675'>					 <span class="s">&quot;final_write:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC676'>					 <span class="s">&quot;cpi	r17,0		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC677'>					 <span class="s">&quot;breq	block_done	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC678'>					 <span class="s">&quot;adiw	r24,2		</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//length+2, fool above check on length after short page write</span></div><div class='line' id='LC679'>					 <span class="s">&quot;rjmp	write_page	</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC680'>					 <span class="s">&quot;block_done:		</span><span class="se">\n\t</span><span class="s">&quot;</span></div><div class='line' id='LC681'>					 <span class="s">&quot;clr	__zero_reg__	</span><span class="se">\n\t</span><span class="s">&quot;</span>	<span class="c1">//restore zero register</span></div><div class='line' id='LC682'><span class="cp">#if defined __AVR_ATmega168__  || __AVR_ATmega328P__ || __AVR_ATmega128__ || __AVR_ATmega1280__ || __AVR_ATmega1281__ </span></div><div class='line' id='LC683'>					 <span class="o">:</span> <span class="s">&quot;=m&quot;</span> <span class="p">(</span><span class="n">SPMCSR</span><span class="p">)</span> <span class="o">:</span> <span class="s">&quot;M&quot;</span> <span class="p">(</span><span class="n">PAGE_SIZE</span><span class="p">)</span> <span class="o">:</span> <span class="s">&quot;r0&quot;</span><span class="p">,</span><span class="s">&quot;r16&quot;</span><span class="p">,</span><span class="s">&quot;r17&quot;</span><span class="p">,</span><span class="s">&quot;r24&quot;</span><span class="p">,</span><span class="s">&quot;r25&quot;</span><span class="p">,</span><span class="s">&quot;r28&quot;</span><span class="p">,</span><span class="s">&quot;r29&quot;</span><span class="p">,</span><span class="s">&quot;r30&quot;</span><span class="p">,</span><span class="s">&quot;r31&quot;</span></div><div class='line' id='LC684'><span class="cp">#else</span></div><div class='line' id='LC685'>					 <span class="o">:</span> <span class="s">&quot;=m&quot;</span> <span class="p">(</span><span class="n">SPMCR</span><span class="p">)</span> <span class="o">:</span> <span class="s">&quot;M&quot;</span> <span class="p">(</span><span class="n">PAGE_SIZE</span><span class="p">)</span> <span class="o">:</span> <span class="s">&quot;r0&quot;</span><span class="p">,</span><span class="s">&quot;r16&quot;</span><span class="p">,</span><span class="s">&quot;r17&quot;</span><span class="p">,</span><span class="s">&quot;r24&quot;</span><span class="p">,</span><span class="s">&quot;r25&quot;</span><span class="p">,</span><span class="s">&quot;r28&quot;</span><span class="p">,</span><span class="s">&quot;r29&quot;</span><span class="p">,</span><span class="s">&quot;r30&quot;</span><span class="p">,</span><span class="s">&quot;r31&quot;</span></div><div class='line' id='LC686'><span class="cp">#endif</span></div><div class='line' id='LC687'>					 <span class="p">);</span></div><div class='line' id='LC688'>				<span class="cm">/* Should really add a wait for RWW section to be enabled, don&#39;t actually need it since we never */</span></div><div class='line' id='LC689'>				<span class="cm">/* exit the bootloader without a power cycle anyhow */</span></div><div class='line' id='LC690'>			<span class="p">}</span></div><div class='line' id='LC691'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC692'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC693'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC694'>			<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span></div><div class='line' id='LC695'>				<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC696'>		<span class="p">}</span>		</div><div class='line' id='LC697'>	<span class="p">}</span></div><div class='line' id='LC698'><br/></div><div class='line' id='LC699'><br/></div><div class='line' id='LC700'>	<span class="cm">/* Read memory block mode, length is big endian.  */</span></div><div class='line' id='LC701'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;t&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC702'>		<span class="n">length</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC703'>		<span class="n">length</span><span class="p">.</span><span class="n">byte</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC704'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC705'>		<span class="k">if</span> <span class="p">(</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="o">&gt;</span><span class="mh">0x7FFF</span><span class="p">)</span> <span class="n">flags</span><span class="p">.</span><span class="n">rampz</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span>		<span class="c1">// No go with m256, FIXME</span></div><div class='line' id='LC706'>		<span class="k">else</span> <span class="n">flags</span><span class="p">.</span><span class="n">rampz</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC707'><span class="cp">#endif</span></div><div class='line' id='LC708'>		<span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">=</span> <span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">&lt;&lt;</span> <span class="mi">1</span><span class="p">;</span>	        <span class="c1">// address * 2 -&gt; byte location</span></div><div class='line' id='LC709'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39;E&#39;</span><span class="p">)</span> <span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC710'>		<span class="k">else</span> <span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC711'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span>		                <span class="c1">// Command terminator</span></div><div class='line' id='LC712'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC713'>			<span class="k">for</span> <span class="p">(</span><span class="n">w</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">w</span> <span class="o">&lt;</span> <span class="n">length</span><span class="p">.</span><span class="n">word</span><span class="p">;</span><span class="n">w</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span>		        <span class="c1">// Can handle odd and even lengths okay</span></div><div class='line' id='LC714'>				<span class="k">if</span> <span class="p">(</span><span class="n">flags</span><span class="p">.</span><span class="n">eeprom</span><span class="p">)</span> <span class="p">{</span>	                        <span class="c1">// Byte access EEPROM read</span></div><div class='line' id='LC715'><span class="cp">#if defined(__AVR_ATmega168__)  || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC716'>					<span class="k">while</span><span class="p">(</span><span class="n">EECR</span> <span class="o">&amp;</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">EEPE</span><span class="p">));</span></div><div class='line' id='LC717'>					<span class="n">EEAR</span> <span class="o">=</span> <span class="p">(</span><span class="kt">uint16_t</span><span class="p">)(</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="p">;</span></div><div class='line' id='LC718'>					<span class="n">EECR</span> <span class="o">|=</span> <span class="p">(</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="n">EERE</span><span class="p">);</span></div><div class='line' id='LC719'>					<span class="n">putch</span><span class="p">(</span><span class="n">EEDR</span><span class="p">);</span></div><div class='line' id='LC720'><span class="cp">#else</span></div><div class='line' id='LC721'>					<span class="n">putch</span><span class="p">(</span><span class="n">eeprom_read_byte</span><span class="p">((</span><span class="kt">void</span> <span class="o">*</span><span class="p">)</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="p">));</span></div><div class='line' id='LC722'><span class="cp">#endif</span></div><div class='line' id='LC723'>					<span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC724'>				<span class="p">}</span></div><div class='line' id='LC725'>				<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC726'><br/></div><div class='line' id='LC727'>					<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">flags</span><span class="p">.</span><span class="n">rampz</span><span class="p">)</span> <span class="n">putch</span><span class="p">(</span><span class="n">pgm_read_byte_near</span><span class="p">(</span><span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="p">));</span></div><div class='line' id='LC728'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC729'>					<span class="k">else</span> <span class="n">putch</span><span class="p">(</span><span class="n">pgm_read_byte_far</span><span class="p">(</span><span class="n">address</span><span class="p">.</span><span class="n">word</span> <span class="o">+</span> <span class="mh">0x10000</span><span class="p">));</span></div><div class='line' id='LC730'><span class="cp">					// Hmmmm, yuck  FIXME when m256 arrvies</span></div><div class='line' id='LC731'><span class="cp">#endif</span></div><div class='line' id='LC732'>					<span class="n">address</span><span class="p">.</span><span class="n">word</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC733'>				<span class="p">}</span></div><div class='line' id='LC734'>			<span class="p">}</span></div><div class='line' id='LC735'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC736'>		<span class="p">}</span></div><div class='line' id='LC737'>	<span class="p">}</span></div><div class='line' id='LC738'><br/></div><div class='line' id='LC739'><br/></div><div class='line' id='LC740'>	<span class="cm">/* Get device signature bytes  */</span></div><div class='line' id='LC741'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;u&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC742'>		<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC743'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC744'>			<span class="n">putch</span><span class="p">(</span><span class="n">SIG1</span><span class="p">);</span></div><div class='line' id='LC745'>			<span class="n">putch</span><span class="p">(</span><span class="n">SIG2</span><span class="p">);</span></div><div class='line' id='LC746'>			<span class="n">putch</span><span class="p">(</span><span class="n">SIG3</span><span class="p">);</span></div><div class='line' id='LC747'>			<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC748'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC749'>			<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span></div><div class='line' id='LC750'>				<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC751'>		<span class="p">}</span></div><div class='line' id='LC752'>	<span class="p">}</span></div><div class='line' id='LC753'><br/></div><div class='line' id='LC754'><br/></div><div class='line' id='LC755'>	<span class="cm">/* Read oscillator calibration byte */</span></div><div class='line' id='LC756'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;v&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC757'>		<span class="n">byte_response</span><span class="p">(</span><span class="mh">0x00</span><span class="p">);</span></div><div class='line' id='LC758'>	<span class="p">}</span></div><div class='line' id='LC759'><br/></div><div class='line' id='LC760'><br/></div><div class='line' id='LC761'><span class="cp">#if defined MONITOR </span></div><div class='line' id='LC762'><br/></div><div class='line' id='LC763'>	<span class="cm">/* here come the extended monitor commands by Erik Lins */</span></div><div class='line' id='LC764'><br/></div><div class='line' id='LC765'>	<span class="cm">/* check for three times exclamation mark pressed */</span></div><div class='line' id='LC766'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;!&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC767'>		<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC768'>		<span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;!&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC769'>		<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC770'>		<span class="k">if</span><span class="p">(</span><span class="n">ch</span><span class="o">==</span><span class="sc">&#39;!&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC771'>			<span class="n">PGM_P</span> <span class="n">welcome</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">;</span></div><div class='line' id='LC772'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC773'>			<span class="kt">uint16_t</span> <span class="n">extaddr</span><span class="p">;</span></div><div class='line' id='LC774'><span class="cp">#endif</span></div><div class='line' id='LC775'>			<span class="kt">uint8_t</span> <span class="n">addrl</span><span class="p">,</span> <span class="n">addrh</span><span class="p">;</span></div><div class='line' id='LC776'><br/></div><div class='line' id='LC777'><span class="cp">#ifdef CRUMB128</span></div><div class='line' id='LC778'>			<span class="n">welcome</span> <span class="o">=</span> <span class="s">&quot;ATmegaBOOT / Crumb128 - (C) J.P.Kyle, E.Lins - 050815</span><span class="se">\n\r</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC779'><span class="cp">#elif defined PROBOMEGA128</span></div><div class='line' id='LC780'>			<span class="n">welcome</span> <span class="o">=</span> <span class="s">&quot;ATmegaBOOT / PROBOmega128 - (C) J.P.Kyle, E.Lins - 050815</span><span class="se">\n\r</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC781'><span class="cp">#elif defined SAVVY128</span></div><div class='line' id='LC782'>			<span class="n">welcome</span> <span class="o">=</span> <span class="s">&quot;ATmegaBOOT / Savvy128 - (C) J.P.Kyle, E.Lins - 050815</span><span class="se">\n\r</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC783'><span class="cp">#elif defined __AVR_ATmega1280__ </span></div><div class='line' id='LC784'>			<span class="n">welcome</span> <span class="o">=</span> <span class="s">&quot;ATmegaBOOT / Arduino Mega - (C) Arduino LLC - 090930</span><span class="se">\n\r</span><span class="s">&quot;</span><span class="p">;</span></div><div class='line' id='LC785'><span class="cp">#endif</span></div><div class='line' id='LC786'><br/></div><div class='line' id='LC787'>			<span class="cm">/* turn on LED */</span></div><div class='line' id='LC788'>			<span class="n">LED_DDR</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC789'>			<span class="n">LED_PORT</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC790'><br/></div><div class='line' id='LC791'>			<span class="cm">/* print a welcome message and command overview */</span></div><div class='line' id='LC792'>			<span class="k">for</span><span class="p">(</span><span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">welcome</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">!=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span> <span class="o">++</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC793'>				<span class="n">putch</span><span class="p">(</span><span class="n">welcome</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC794'>			<span class="p">}</span></div><div class='line' id='LC795'><br/></div><div class='line' id='LC796'>			<span class="cm">/* test for valid commands */</span></div><div class='line' id='LC797'>			<span class="k">for</span><span class="p">(;;)</span> <span class="p">{</span></div><div class='line' id='LC798'>				<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;\n&#39;</span><span class="p">);</span></div><div class='line' id='LC799'>				<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;\r&#39;</span><span class="p">);</span></div><div class='line' id='LC800'>				<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;:&#39;</span><span class="p">);</span></div><div class='line' id='LC801'>				<span class="n">putch</span><span class="p">(</span><span class="sc">&#39; &#39;</span><span class="p">);</span></div><div class='line' id='LC802'><br/></div><div class='line' id='LC803'>				<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC804'>				<span class="n">putch</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC805'><br/></div><div class='line' id='LC806'>				<span class="cm">/* toggle LED */</span></div><div class='line' id='LC807'>				<span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;t&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC808'>					<span class="k">if</span><span class="p">(</span><span class="n">bit_is_set</span><span class="p">(</span><span class="n">LED_PIN</span><span class="p">,</span><span class="n">LED</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC809'>						<span class="n">LED_PORT</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC810'>						<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;1&#39;</span><span class="p">);</span></div><div class='line' id='LC811'>					<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC812'>						<span class="n">LED_PORT</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC813'>						<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;0&#39;</span><span class="p">);</span></div><div class='line' id='LC814'>					<span class="p">}</span></div><div class='line' id='LC815'>				<span class="p">}</span> </div><div class='line' id='LC816'><br/></div><div class='line' id='LC817'>				<span class="cm">/* read byte from address */</span></div><div class='line' id='LC818'>				<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;r&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC819'>					<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span> <span class="n">putch</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC820'>					<span class="n">addrh</span> <span class="o">=</span> <span class="n">gethex</span><span class="p">();</span></div><div class='line' id='LC821'>					<span class="n">addrl</span> <span class="o">=</span> <span class="n">gethex</span><span class="p">();</span></div><div class='line' id='LC822'>					<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;=&#39;</span><span class="p">);</span></div><div class='line' id='LC823'>					<span class="n">ch</span> <span class="o">=</span> <span class="o">*</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="o">*</span><span class="p">)((</span><span class="n">addrh</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">+</span> <span class="n">addrl</span><span class="p">);</span></div><div class='line' id='LC824'>					<span class="n">puthex</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC825'>				<span class="p">}</span></div><div class='line' id='LC826'><br/></div><div class='line' id='LC827'>				<span class="cm">/* write a byte to address  */</span></div><div class='line' id='LC828'>				<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;w&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC829'>					<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span> <span class="n">putch</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC830'>					<span class="n">addrh</span> <span class="o">=</span> <span class="n">gethex</span><span class="p">();</span></div><div class='line' id='LC831'>					<span class="n">addrl</span> <span class="o">=</span> <span class="n">gethex</span><span class="p">();</span></div><div class='line' id='LC832'>					<span class="n">ch</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span> <span class="n">putch</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC833'>					<span class="n">ch</span> <span class="o">=</span> <span class="n">gethex</span><span class="p">();</span></div><div class='line' id='LC834'>					<span class="o">*</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="o">*</span><span class="p">)((</span><span class="n">addrh</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">+</span> <span class="n">addrl</span><span class="p">)</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC835'>				<span class="p">}</span></div><div class='line' id='LC836'><br/></div><div class='line' id='LC837'>				<span class="cm">/* read from uart and echo back */</span></div><div class='line' id='LC838'>				<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;u&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC839'>					<span class="k">for</span><span class="p">(;;)</span> <span class="p">{</span></div><div class='line' id='LC840'>						<span class="n">putch</span><span class="p">(</span><span class="n">getch</span><span class="p">());</span></div><div class='line' id='LC841'>					<span class="p">}</span></div><div class='line' id='LC842'>				<span class="p">}</span></div><div class='line' id='LC843'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC844'>				<span class="cm">/* external bus loop  */</span></div><div class='line' id='LC845'>				<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;b&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC846'>					<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;b&#39;</span><span class="p">);</span></div><div class='line' id='LC847'>					<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;u&#39;</span><span class="p">);</span></div><div class='line' id='LC848'>					<span class="n">putch</span><span class="p">(</span><span class="sc">&#39;s&#39;</span><span class="p">);</span></div><div class='line' id='LC849'>					<span class="n">MCUCR</span> <span class="o">=</span> <span class="mh">0x80</span><span class="p">;</span></div><div class='line' id='LC850'>					<span class="n">XMCRA</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC851'>					<span class="n">XMCRB</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC852'>					<span class="n">extaddr</span> <span class="o">=</span> <span class="mh">0x1100</span><span class="p">;</span></div><div class='line' id='LC853'>					<span class="k">for</span><span class="p">(;;)</span> <span class="p">{</span></div><div class='line' id='LC854'>						<span class="n">ch</span> <span class="o">=</span> <span class="o">*</span><span class="p">(</span><span class="k">volatile</span> <span class="kt">uint8_t</span> <span class="o">*</span><span class="p">)</span><span class="n">extaddr</span><span class="p">;</span></div><div class='line' id='LC855'>						<span class="k">if</span><span class="p">(</span><span class="o">++</span><span class="n">extaddr</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC856'>							<span class="n">extaddr</span> <span class="o">=</span> <span class="mh">0x1100</span><span class="p">;</span></div><div class='line' id='LC857'>						<span class="p">}</span></div><div class='line' id='LC858'>					<span class="p">}</span></div><div class='line' id='LC859'>				<span class="p">}</span></div><div class='line' id='LC860'><span class="cp">#endif</span></div><div class='line' id='LC861'><br/></div><div class='line' id='LC862'>				<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">==</span> <span class="sc">&#39;j&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC863'>					<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC864'>				<span class="p">}</span></div><div class='line' id='LC865'><br/></div><div class='line' id='LC866'>			<span class="p">}</span> <span class="cm">/* end of monitor functions */</span></div><div class='line' id='LC867'><br/></div><div class='line' id='LC868'>		<span class="p">}</span></div><div class='line' id='LC869'>		<span class="p">}</span></div><div class='line' id='LC870'>	<span class="p">}</span></div><div class='line' id='LC871'><span class="cp">	/* end of monitor */</span></div><div class='line' id='LC872'><span class="cp">#endif</span></div><div class='line' id='LC873'>	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC874'>		<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC875'>	<span class="p">}</span></div><div class='line' id='LC876'>	<span class="p">}</span> <span class="cm">/* end of forever loop */</span></div><div class='line' id='LC877'><br/></div><div class='line' id='LC878'><span class="p">}</span></div><div class='line' id='LC879'><br/></div><div class='line' id='LC880'><br/></div><div class='line' id='LC881'><span class="kt">char</span> <span class="nf">gethexnib</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC882'>	<span class="kt">char</span> <span class="n">a</span><span class="p">;</span></div><div class='line' id='LC883'>	<span class="n">a</span> <span class="o">=</span> <span class="n">getch</span><span class="p">();</span> <span class="n">putch</span><span class="p">(</span><span class="n">a</span><span class="p">);</span></div><div class='line' id='LC884'>	<span class="k">if</span><span class="p">(</span><span class="n">a</span> <span class="o">&gt;=</span> <span class="sc">&#39;a&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC885'>		<span class="k">return</span> <span class="p">(</span><span class="n">a</span> <span class="o">-</span> <span class="sc">&#39;a&#39;</span> <span class="o">+</span> <span class="mh">0x0a</span><span class="p">);</span></div><div class='line' id='LC886'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">a</span> <span class="o">&gt;=</span> <span class="sc">&#39;0&#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC887'>		<span class="k">return</span><span class="p">(</span><span class="n">a</span> <span class="o">-</span> <span class="sc">&#39;0&#39;</span><span class="p">);</span></div><div class='line' id='LC888'>	<span class="p">}</span></div><div class='line' id='LC889'>	<span class="k">return</span> <span class="n">a</span><span class="p">;</span></div><div class='line' id='LC890'><span class="p">}</span></div><div class='line' id='LC891'><br/></div><div class='line' id='LC892'><br/></div><div class='line' id='LC893'><span class="kt">char</span> <span class="nf">gethex</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC894'>	<span class="k">return</span> <span class="p">(</span><span class="n">gethexnib</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="mi">4</span><span class="p">)</span> <span class="o">+</span> <span class="n">gethexnib</span><span class="p">();</span></div><div class='line' id='LC895'><span class="p">}</span></div><div class='line' id='LC896'><br/></div><div class='line' id='LC897'><br/></div><div class='line' id='LC898'><span class="kt">void</span> <span class="nf">puthex</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC899'>	<span class="kt">char</span> <span class="n">ah</span><span class="p">;</span></div><div class='line' id='LC900'><br/></div><div class='line' id='LC901'>	<span class="n">ah</span> <span class="o">=</span> <span class="n">ch</span> <span class="o">&gt;&gt;</span> <span class="mi">4</span><span class="p">;</span></div><div class='line' id='LC902'>	<span class="k">if</span><span class="p">(</span><span class="n">ah</span> <span class="o">&gt;=</span> <span class="mh">0x0a</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC903'>		<span class="n">ah</span> <span class="o">=</span> <span class="n">ah</span> <span class="o">-</span> <span class="mh">0x0a</span> <span class="o">+</span> <span class="sc">&#39;a&#39;</span><span class="p">;</span></div><div class='line' id='LC904'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC905'>		<span class="n">ah</span> <span class="o">+=</span> <span class="sc">&#39;0&#39;</span><span class="p">;</span></div><div class='line' id='LC906'>	<span class="p">}</span></div><div class='line' id='LC907'><br/></div><div class='line' id='LC908'>	<span class="n">ch</span> <span class="o">&amp;=</span> <span class="mh">0x0f</span><span class="p">;</span></div><div class='line' id='LC909'>	<span class="k">if</span><span class="p">(</span><span class="n">ch</span> <span class="o">&gt;=</span> <span class="mh">0x0a</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC910'>		<span class="n">ch</span> <span class="o">=</span> <span class="n">ch</span> <span class="o">-</span> <span class="mh">0x0a</span> <span class="o">+</span> <span class="sc">&#39;a&#39;</span><span class="p">;</span></div><div class='line' id='LC911'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC912'>		<span class="n">ch</span> <span class="o">+=</span> <span class="sc">&#39;0&#39;</span><span class="p">;</span></div><div class='line' id='LC913'>	<span class="p">}</span></div><div class='line' id='LC914'><br/></div><div class='line' id='LC915'>	<span class="n">putch</span><span class="p">(</span><span class="n">ah</span><span class="p">);</span></div><div class='line' id='LC916'>	<span class="n">putch</span><span class="p">(</span><span class="n">ch</span><span class="p">);</span></div><div class='line' id='LC917'><span class="p">}</span></div><div class='line' id='LC918'><br/></div><div class='line' id='LC919'><br/></div><div class='line' id='LC920'><span class="kt">void</span> <span class="nf">putch</span><span class="p">(</span><span class="kt">char</span> <span class="n">ch</span><span class="p">)</span></div><div class='line' id='LC921'><span class="p">{</span></div><div class='line' id='LC922'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC923'>	<span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC924'>		<span class="k">while</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR0A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">UDRE0</span><span class="p">)));</span></div><div class='line' id='LC925'>		<span class="n">UDR0</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC926'>	<span class="p">}</span></div><div class='line' id='LC927'>	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC928'>		<span class="k">while</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR1A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">UDRE1</span><span class="p">)));</span></div><div class='line' id='LC929'>		<span class="n">UDR1</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC930'>	<span class="p">}</span></div><div class='line' id='LC931'><span class="cp">#elif defined(__AVR_ATmega168__)  || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC932'>	<span class="k">while</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR0A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">UDRE0</span><span class="p">)));</span></div><div class='line' id='LC933'>	<span class="n">UDR0</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC934'><span class="cp">#else</span></div><div class='line' id='LC935'>	<span class="cm">/* m8,16,32,169,8515,8535,163 */</span></div><div class='line' id='LC936'>	<span class="k">while</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSRA</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">UDRE</span><span class="p">)));</span></div><div class='line' id='LC937'>	<span class="n">UDR</span> <span class="o">=</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC938'><span class="cp">#endif</span></div><div class='line' id='LC939'><span class="p">}</span></div><div class='line' id='LC940'><br/></div><div class='line' id='LC941'><br/></div><div class='line' id='LC942'><span class="kt">char</span> <span class="nf">getch</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC943'><span class="p">{</span></div><div class='line' id='LC944'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC945'>	<span class="kt">uint32_t</span> <span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC946'>	<span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC947'>		<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR0A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC0</span><span class="p">)))</span> <span class="p">{</span></div><div class='line' id='LC948'>			<span class="cm">/* 20060803 DojoCorp:: Addon coming from the previous Bootloader*/</span>               </div><div class='line' id='LC949'>			<span class="cm">/* HACKME:: here is a good place to count times*/</span></div><div class='line' id='LC950'>			<span class="n">count</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC951'>			<span class="k">if</span> <span class="p">(</span><span class="n">count</span> <span class="o">&gt;</span> <span class="n">MAX_TIME_COUNT</span><span class="p">)</span></div><div class='line' id='LC952'>				<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC953'>			<span class="p">}</span></div><div class='line' id='LC954'><br/></div><div class='line' id='LC955'>			<span class="k">return</span> <span class="n">UDR0</span><span class="p">;</span></div><div class='line' id='LC956'>		<span class="p">}</span></div><div class='line' id='LC957'>	<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC958'>		<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR1A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC1</span><span class="p">)))</span> <span class="p">{</span></div><div class='line' id='LC959'>			<span class="cm">/* 20060803 DojoCorp:: Addon coming from the previous Bootloader*/</span>               </div><div class='line' id='LC960'>			<span class="cm">/* HACKME:: here is a good place to count times*/</span></div><div class='line' id='LC961'>			<span class="n">count</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC962'>			<span class="k">if</span> <span class="p">(</span><span class="n">count</span> <span class="o">&gt;</span> <span class="n">MAX_TIME_COUNT</span><span class="p">)</span></div><div class='line' id='LC963'>				<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC964'>		<span class="p">}</span></div><div class='line' id='LC965'><br/></div><div class='line' id='LC966'>		<span class="k">return</span> <span class="n">UDR1</span><span class="p">;</span></div><div class='line' id='LC967'>	<span class="p">}</span></div><div class='line' id='LC968'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC969'><span class="cp">#elif defined(__AVR_ATmega168__)  || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC970'>	<span class="kt">uint32_t</span> <span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC971'>	<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR0A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC0</span><span class="p">))){</span></div><div class='line' id='LC972'>		<span class="cm">/* 20060803 DojoCorp:: Addon coming from the previous Bootloader*/</span>               </div><div class='line' id='LC973'>		<span class="cm">/* HACKME:: here is a good place to count times*/</span></div><div class='line' id='LC974'>		<span class="n">count</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC975'>		<span class="k">if</span> <span class="p">(</span><span class="n">count</span> <span class="o">&gt;</span> <span class="n">MAX_TIME_COUNT</span><span class="p">)</span></div><div class='line' id='LC976'>			<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC977'>	<span class="p">}</span></div><div class='line' id='LC978'>	<span class="k">return</span> <span class="n">UDR0</span><span class="p">;</span></div><div class='line' id='LC979'><span class="cp">#else</span></div><div class='line' id='LC980'>	<span class="cm">/* m8,16,32,169,8515,8535,163 */</span></div><div class='line' id='LC981'>	<span class="kt">uint32_t</span> <span class="n">count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC982'>	<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSRA</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC</span><span class="p">))){</span></div><div class='line' id='LC983'>		<span class="cm">/* 20060803 DojoCorp:: Addon coming from the previous Bootloader*/</span>               </div><div class='line' id='LC984'>		<span class="cm">/* HACKME:: here is a good place to count times*/</span></div><div class='line' id='LC985'>		<span class="n">count</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC986'>		<span class="k">if</span> <span class="p">(</span><span class="n">count</span> <span class="o">&gt;</span> <span class="n">MAX_TIME_COUNT</span><span class="p">)</span></div><div class='line' id='LC987'>			<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC988'>	<span class="p">}</span></div><div class='line' id='LC989'>	<span class="k">return</span> <span class="n">UDR</span><span class="p">;</span></div><div class='line' id='LC990'><span class="cp">#endif</span></div><div class='line' id='LC991'><span class="p">}</span></div><div class='line' id='LC992'><br/></div><div class='line' id='LC993'><br/></div><div class='line' id='LC994'><span class="kt">void</span> <span class="nf">getNch</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC995'><span class="p">{</span></div><div class='line' id='LC996'>	<span class="k">while</span><span class="p">(</span><span class="n">count</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC997'><span class="cp">#if defined(__AVR_ATmega128__) || defined(__AVR_ATmega1280__)</span></div><div class='line' id='LC998'>		<span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC999'>			<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR0A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC0</span><span class="p">)));</span></div><div class='line' id='LC1000'>			<span class="n">UDR0</span><span class="p">;</span></div><div class='line' id='LC1001'>		<span class="p">}</span> </div><div class='line' id='LC1002'>		<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">bootuart</span> <span class="o">==</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1003'>			<span class="k">while</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">UCSR1A</span> <span class="o">&amp;</span> <span class="n">_BV</span><span class="p">(</span><span class="n">RXC1</span><span class="p">)));</span></div><div class='line' id='LC1004'>			<span class="n">UDR1</span><span class="p">;</span></div><div class='line' id='LC1005'>		<span class="p">}</span></div><div class='line' id='LC1006'><span class="cp">#elif defined(__AVR_ATmega168__)  || defined(__AVR_ATmega328P__)</span></div><div class='line' id='LC1007'>		<span class="n">getch</span><span class="p">();</span></div><div class='line' id='LC1008'><span class="cp">#else</span></div><div class='line' id='LC1009'>		<span class="cm">/* m8,16,32,169,8515,8535,163 */</span></div><div class='line' id='LC1010'>		<span class="cm">/* 20060803 DojoCorp:: Addon coming from the previous Bootloader*/</span>               </div><div class='line' id='LC1011'>		<span class="c1">//while(!(UCSRA &amp; _BV(RXC)));</span></div><div class='line' id='LC1012'>		<span class="c1">//UDR;</span></div><div class='line' id='LC1013'>		<span class="n">getch</span><span class="p">();</span> <span class="c1">// need to handle time out</span></div><div class='line' id='LC1014'><span class="cp">#endif		</span></div><div class='line' id='LC1015'>	<span class="p">}</span></div><div class='line' id='LC1016'><span class="p">}</span></div><div class='line' id='LC1017'><br/></div><div class='line' id='LC1018'><br/></div><div class='line' id='LC1019'><span class="kt">void</span> <span class="nf">byte_response</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="n">val</span><span class="p">)</span></div><div class='line' id='LC1020'><span class="p">{</span></div><div class='line' id='LC1021'>	<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1022'>		<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC1023'>		<span class="n">putch</span><span class="p">(</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC1024'>		<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC1025'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC1026'>		<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span></div><div class='line' id='LC1027'>			<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC1028'>	<span class="p">}</span></div><div class='line' id='LC1029'><span class="p">}</span></div><div class='line' id='LC1030'><br/></div><div class='line' id='LC1031'><br/></div><div class='line' id='LC1032'><span class="kt">void</span> <span class="nf">nothing_response</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC1033'><span class="p">{</span></div><div class='line' id='LC1034'>	<span class="k">if</span> <span class="p">(</span><span class="n">getch</span><span class="p">()</span> <span class="o">==</span> <span class="sc">&#39; &#39;</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1035'>		<span class="n">putch</span><span class="p">(</span><span class="mh">0x14</span><span class="p">);</span></div><div class='line' id='LC1036'>		<span class="n">putch</span><span class="p">(</span><span class="mh">0x10</span><span class="p">);</span></div><div class='line' id='LC1037'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC1038'>		<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">error_count</span> <span class="o">==</span> <span class="n">MAX_ERROR_COUNT</span><span class="p">)</span></div><div class='line' id='LC1039'>			<span class="n">app_start</span><span class="p">();</span></div><div class='line' id='LC1040'>	<span class="p">}</span></div><div class='line' id='LC1041'><span class="p">}</span></div><div class='line' id='LC1042'><br/></div><div class='line' id='LC1043'><span class="kt">void</span> <span class="nf">flash_led</span><span class="p">(</span><span class="kt">uint8_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC1044'><span class="p">{</span></div><div class='line' id='LC1045'>	<span class="k">while</span> <span class="p">(</span><span class="n">count</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1046'>		<span class="n">LED_PORT</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC1047'>		<span class="n">_delay_ms</span><span class="p">(</span><span class="mi">100</span><span class="p">);</span></div><div class='line' id='LC1048'>		<span class="n">LED_PORT</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">LED</span><span class="p">);</span></div><div class='line' id='LC1049'>		<span class="n">_delay_ms</span><span class="p">(</span><span class="mi">100</span><span class="p">);</span></div><div class='line' id='LC1050'>	<span class="p">}</span></div><div class='line' id='LC1051'><span class="p">}</span></div><div class='line' id='LC1052'><br/></div><div class='line' id='LC1053'><br/></div><div class='line' id='LC1054'><span class="cm">/* end of file ATmegaBOOT.c */</span></div><div class='line' id='LC1055'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;" data-tree-list-url="/arduino/Arduino/tree-list/7d8d20894c7420ad2fea81d80b66075806476179" data-blob-url-prefix="/arduino/Arduino/blob/7d8d20894c7420ad2fea81d80b66075806476179">
  <img src="https://a248.e.akamai.net/assets.github.com/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <!--**************
     FOOTER
     **************-->
    <div id="footer" >
      <div class="upper_footer">
        <div class="site" class="clearfix">

        <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
        <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

        <ul class="footer_nav">
          <h4>GitHub</h4>
          <li><a href="https://github.com/about">About</a></li>
          <li><a href="https://github.com/blog">Blog</a></li>
          <li><a href="https://github.com/features">Features</a></li>
          <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
          <li><a href="https://github.com/training">Training</a></li>
          <li><a href="http://status.github.com/">Site Status</a></li>
        </ul>

        <ul class="footer_nav">
          <h4>Tools</h4>
          <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
          <li><a href="http://mobile.github.com/">Issues for iPhone</a></li>
          <li><a href="https://gist.github.com">Gist: Code Snippets</a></li>
          <li><a href="http://fi.github.com/">Enterprise Install</a></li>
          <li><a href="http://jobs.github.com/">Job Board</a></li>
        </ul>

        <ul class="footer_nav">
          <h4>Extras</h4>
          <li><a href="http://shop.github.com/">GitHub Shop</a></li>
          <li><a href="http://octodex.github.com/">The Octodex</a></li>
        </ul>

        <ul class="footer_nav">
          <h4>Documentation</h4>
          <li><a href="http://help.github.com/">GitHub Help</a></li>
          <li><a href="http://developer.github.com/">Developer API</a></li>
          <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
          <li><a href="http://pages.github.com/">GitHub Pages</a></li>
        </ul>

        </div><!-- /.site -->
      </div><!-- /.upper_footer -->

      <div class="lower_footer">
        <div class="site" class="clearfix">

        <!--[if IE]><div id="legal_ie"><![endif]-->
        <![if !IE]><div id="legal"><![endif]>
              
              <ul>
                <li><a href="https://github.com/site/terms">Terms of Service</a></li>
                <li><a href="https://github.com/site/privacy">Privacy</a></li>
                <li><a href="https://github.com/security">Security</a></li>
              </ul>
              

              <p>&copy; 2011 <span id="_rrt" title="0.20494s from fe8.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
            </div><!-- /#legal or /#legal_ie-->

          
          <div class="sponsor">
              <a href="http://www.rackspace.com" class="logo">
                <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspace_logo.png?v2" width="38" />
              </a>
              Powered by the <a href="http://www.rackspace.com ">Dedicated
              Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
              Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
          
        </div><!-- /.site -->
      </div><!-- /.lower_footer -->
    </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/16/eum/rum.js";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,201,new Date().getTime()])</script>
  </body>
</html>
