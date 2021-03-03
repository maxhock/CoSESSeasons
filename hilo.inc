## hilo module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
## Edited by Miroslav Lach (miroslav.lach@tum.de) for the CoSESWeather-Project

#set $archive_data = [('day', $day), ('week', $week), ('month', $month), ('year', $year)]

<div id='hilo_widget' class="widget">
  <div class="widget_title">
    <a href="statistics.html">Overview [High/Low]</a>
    <a class="widget_control"
      onclick="toggle_widget('hilo')">&diams;</a>
  </div>

  <div class="widget_contents">
  <table>
    <tbody>
      <tr>
        <td></td>
        <th>&nbsp;<br/>Today</th>
        <th class="hilo_week">&nbsp;<br/>Week</th>
        <th class="hilo_month">&nbsp;<br/>Month</th>
        <th class="hilo_year">&nbsp;<br/>Year</th>
        <td></td>
      </tr>
      <tr>
        <td class="label">$obs.label.outTemp</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].outTemp.maxtime">
            $archive[1].outTemp.max.format(add_label=False)</span><br/>
          <span title="$archive[1].outTemp.mintime">
            $archive[1].outTemp.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.outTemp</td>
      </tr>
      <tr>
        <td class="label">$obs.label.windchill</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].windchill.mintime" class="loval">
            $archive[1].windchill.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.windchill</td>
      </tr>
      <tr>
        <td class="label">Wind Max</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].wind.maxtime">
            $archive[1].wind.max.format(add_label=False)</span><br/>
        </td>
        #end for
        <td class="units">
          $unit.label.wind
        </td>
      </tr>
      <tr>
        <td class="label">Wind Average</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          $archive[1].wind.avg.format(add_label=False)</td>
        #end for
        <td class="units">$unit.label.wind</td>
      </tr>
      <tr>
        <td class="label">Wind RMS</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          $archive[1].wind.rms.format(add_label=False)</td>
        #end for
        <td class="units">$unit.label.wind</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].radiation.maxtime">
            $archive[1].radiation.max.format(add_label=False)</span><br/>
          <span title="$archive[1].radiation.mintime">
            $archive[1].radiation.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.radiation</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiationDiff</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].radiationDiff.maxtime">
            $archive[1].radiationDiff.max.format(add_label=False)</span><br/>
          <span title="$archive[1].radiationDiff.mintime">
            $archive[1].radiationDiff.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.radiation</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation1</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].radiation1.maxtime">
            $archive[1].radiation1.max.format(add_label=False)</span><br/>
          <span title="$archive[1].radiation1.mintime">
            $archive[1].radiation1.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.radiation</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation2</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].radiation2.maxtime">
            $archive[1].radiation2.max.format(add_label=False)</span><br/>
          <span title="$archive[1].radiation2.mintime">
            $archive[1].radiation2.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.radiation</td>
      </tr>
      <tr>
        <td class="label">$obs.label.radiation3</td>
        #for $archive in $archive_data
        <td class="data new_row hilo_$archive[0]">
          <span title="$archive[1].radiation3.maxtime">
            $archive[1].radiation3.max.format(add_label=False)</span><br/>
          <span title="$archive[1].radiation3.mintime">
            $archive[1].radiation3.min.format(add_label=False)</span>
        </td>
        #end for
        <td class="units">$unit.label.radiation</td>
      </tr>
    </tbody>
  </table>
  </div>
</div>
