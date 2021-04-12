<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<meta name="generator" content="RocketCake">
	<title></title>
	<style type="text/css">
		h1, h2, h3 { margin:0; padding:0; font-weight:normal; font-style:normal; }
		a { color:#5D5D9E; } 
		a:visited { color:#5D5D9E; } 
		a:active { color:#5C615E; } 
		a:hover { color:#B2B3B4; } 
		#table_7fa21dec th { border: 1px solid #8C8C8C;  } 
		#table_7fa21dec td { border: 1px solid #8C8C8C;  } 
	</style>
</head>
<body style="background-color:#FFFFFF; padding:0;  margin: 0;">
<div style="text-align:left;">
  <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Library to use a rotary encoder with Arduino (or ESP)<br/>Initalize by creating an object of class rotary: rotary a-name(pinA/CLK, pinB/DT, pinSwicht, minValue,maxValue, steps/click, rolOver)<br/>rollOver true = at maxValue the value rolls over to minValue, at minValue the value rols over to maxValue (contineaous rotor)<br/>inputs are pulled-up<br/>Methods<br/></span>
  <table id="table_7fa21dec" cellpadding="3" cellspacing="1"  style="box-sizing: border-box; vertical-align: bottom; position:relative; display: inline-table; width:50%; height:235px; background:none; border: 1px solid #8C8C8C; table-layout: fixed; ">
	<tr>
		<td width="18%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_35965677">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Returned/type</span>
        </div>
      </div>
		</td>
		<td width="21%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_5ce8949f">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Method</span>
        </div>
      </div>
		</td>
		<td width="60%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_19d801ec">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Description</span>
        </div>
      </div>
		</td>
	</tr>
	<tr>
		<td width="18%" height="62px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_7330b34f">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">integer (value between minValue and maxValue</span>
        </div>
      </div>
		</td>
		<td width="21%" height="62px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_59a0caff">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">getValue()</span>
        </div>
      </div>
		</td>
		<td width="60%" height="62px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_2af71ef1">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">return a value in between minValue and maxValue</span>
        </div>
      </div>
		</td>
	</tr>
	<tr>
		<td width="18%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_78d6203e">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">none</span>
        </div>
      </div>
		</td>
		<td width="21%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_548ef2b6">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">setDebug(bool)</span>
        </div>
      </div>
		</td>
		<td width="60%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_5271cb71">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">true=debug via serial console(requires Serial.begin() initialzed)</span>
        </div>
      </div>
		</td>
	</tr>
	<tr>
		<td width="18%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_50693a0d">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">none</span>
        </div>
      </div>
		</td>
		<td width="21%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_16807a67">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">setValue(int)</span>
        </div>
      </div>
		</td>
		<td width="60%" height="28px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_3e1b6995">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Sets the value (can be used in case the value is handled outside the class</span>
        </div>
      </div>
		</td>
	</tr>
	<tr>
		<td width="18%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_1d959c24">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">boolean</span>
        </div>
      </div>
		</td>
		<td width="21%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_91ac625">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">getSwitch</span>
        </div>
      </div>
		</td>
		<td width="60%" height="21px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_33dab022">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Toggles status when switch is pushed from on to off</span>
        </div>
      </div>
		</td>
	</tr>
	<tr>
		<td width="18%" height="18px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_65637dac">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">integer (-1,0,1)</span>
        </div>
      </div>
		</td>
		<td width="21%" height="18px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_ade6698">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">getDirection</span>
        </div>
      </div>
		</td>
		<td width="60%" height="18px" style="vertical-align: top; overflow:hidden; ">    <div style="" id="cell_1f58b967">
      <div style="text-align:left;">
        <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; ">Indicates a direction (if none = 0) </span>
        </div>
      </div>
		</td>
	</tr>
    </table>
  <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; "><br/><br/></span>
<h2 style="vertical-align: bottom; position:relative; display: inline-block; background:none; font-size:18pt; font-family:Arial, Helvetica, sans-serif; color:#000000; text-align:left; " id="heading_68635472">How to use</h2>  <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; "><br/></span>
<h3 style="vertical-align: bottom; position:relative; display: inline-block; background:none; font-size:14pt; font-family:Arial, Helvetica, sans-serif; color:#000000; text-align:left; " id="heading_71297186">Locally</h3>  <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; "><br/>copy rotary.h and rotary.cpp to your sketch directory<br/>use #include &quot;rotary.h&quot; in your sketch<br/></span>
<h3 style="vertical-align: bottom; position:relative; display: inline-block; background:none; font-size:14pt; font-family:Arial, Helvetica, sans-serif; color:#000000; text-align:left; " id="heading_63e1ae66">Install in labraries</h3>  <span style="font-size:12pt; font-family:Arial, Helvetica, sans-serif; color:#000000; "><br/><br/>Create a folder &quot;rotary&quot; in your Arduino libraries folder<br/>copy rotary.h and rotarcy.ccp to the folder<br/>restart Arduino IDE<br/>use #include &lt;rotary.h&gt; in your sketch<br/><br/><br/><br/><br/></span>
  </div>
</body>
</html>
