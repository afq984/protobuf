import json

# Generated with
# bazelisk cquery 'kind("source file", deps(//rust/upb:upb_c_api))' --output jsonproto
with open('a.json') as f:
    d = json.load(f)

for t in d['results']:
    n = t['target']['sourceFile']['name']
    if n.startswith('//upb') and n.endswith('.c'):
        x = '../..' + n[1:].replace(':', '/')
        print(f'.file("{x}")')
