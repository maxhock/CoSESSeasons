## current module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
## Edited by Miroslav Lach (miroslav.lach@tum.de) for the CoSESWeather-Project
#errorCatcher Echo

<div id='current_widget' class="widget">
  <div class="widget_title">
    Current Conditions
    <a class="widget_control"
      onclick="toggle_widget('current')">&diams;</a>
  </div>

  <div class="widget_contents">
  <table>
    <tbody>
      <tr>
        <td class="label">$obs.label.outTemp</td>
        <td class="data">$current.outTemp</td>
      </tr>
      <tr>
        <td class="label">$obs.label.windchill</td>
        <td class="data">$current.windchill</td>
      </tr>
      <tr>
        <td class="label">$obs.label.wind</td>
        <td class="data">$current.windSpeed</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation</td>
        <td class="data">$current.radiation</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiationDiff</td>
        <td class="data">$current.radiationDiff</td>
      </tr>
      <tr>
        <td class="label">$obs.label.sun</td>
        <td class="data">$current.sun</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation1</td>
        <td class="data">$current.radiation1</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation2</td>
        <td class="data">$current.radiation2</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation3</td>
        <td class="data">$current.radiation3</td>
      </tr>	  
    </tbody>
  </table>
  </div>

</div>
