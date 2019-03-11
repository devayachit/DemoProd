vuser_init()
{
	Demo();
	return 0;
}

Demo()
{
	lr_output_message( "We are on iteration #%s", lr_eval_string( "{iteration}" ));
	                  return(1);
}
