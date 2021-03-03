## statistics module for weewx skins
## Copyright Tom Keffer, Matthew Wall
## See LICENSE.txt for your rights
## Edited by Miroslav Lach (miroslav.lach@tum.de) for the CoSESWeather-Project
#errorCatcher Echo

#set $archive_data = [$day, $week, $month, $year]

<div id="statistics_widget" class="widget">
  <div class="widget_title">
    Statistics
  </div>
  <div class="widget_contents">
    <table>
      <tbody>
        <tr>
          <td></td>
          <td></td>
          <th>Today</th>
          <th class="hilo_week">Week</th>
          <th class="hilo_month">Month</th>
          <th class="hilo_year">Year</th>
        </tr>
        <tr>
          <td class="label">$obs.label.outTemp</td>
          <td class="units">$unit.label.outTemp</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.outTemp.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.outTemp.maxtime</span><br/>
            $archive.outTemp.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.outTemp.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.windchill</td>
          <td class="units">$unit.label.windchill</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.windchill.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.windchill.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">Wind Max</td>
          <td class="units">
            $unit.label.wind<br/>
          </td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.wind.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.wind.maxtime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">Wind Average</td>
          <td class="units">$unit.label.wind</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.wind.avg.format(add_label=False)</td>
          #end for
        </tr>
        <tr>
          <td class="label">Wind RMS</td>
          <td class="units">$unit.label.wind</td>
          #for $archive in $archive_data
          <td class="data new_row">$archive.wind.rms.format(add_label=False)</td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.radiation</td>
          <td class="units">$unit.label.radiation</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.radiation.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation.maxtime</span><br/>
            $archive.radiation.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.radiationDiff</td>
          <td class="units">$unit.label.radiation</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.radiationDiff.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiationDiff.maxtime</span><br/>
            $archive.radiationDiff.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiationDiff.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.radiation1</td>
          <td class="units">$unit.label.radiation</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.radiation1.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation1.maxtime</span><br/>
            $archive.radiation1.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation1.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.radiation2</td>
          <td class="units">$unit.label.radiation</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.radiation2.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation2.maxtime</span><br/>
            $archive.radiation2.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation2.mintime</span>
          </td>
          #end for
        </tr>
        <tr>
          <td class="label">$obs.label.radiation3</td>
          <td class="units">$unit.label.radiation</td>
          #for $archive in $archive_data
          <td class="data new_row">
            $archive.radiation3.max.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation3.maxtime</span><br/>
            $archive.radiation3.min.format(add_label=False)<br/>
            <span class="timestamp">$archive.radiation3.mintime</span>
          </td>
          #end for
        </tr>		
      </tbody>
    </table>
  </div>
</div>
