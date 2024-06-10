from app import app

@app.route('/')
@app.route('/index')
def index():
    user = {'username': 'Tracy'}
    return '''
<html>
    <head>
        <title>Home Page - NanoBlokh</title>
    </head>
    <body>
        <h1>Hello, ''' + user['username' + '''!</h1>
    </body>
</hmtl>'''
